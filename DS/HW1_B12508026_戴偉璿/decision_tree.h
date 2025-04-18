#include<bits/stdc++.h>
#include <thread>

#define eb emplace_back
#define m_p make_pair
#define ff first
#define ss second
using namespace std;

class ReadData{
public:
    vector<vector<double>> x;
    vector<int> y;

    ReadData(const string &_filename, const int &_gates){
        read_file(_filename, _gates);
    }

    void read_file(const string &filename, const int &gates){
        x.clear(), y.clear();
        fstream fin(filename, ios::in);
        if(!fin.is_open()){
            cout<<"Can't open "<<filename<<'\n';
            return;
        }
        vector<double> tmp;
        while(fin){
            tmp.clear();
            double in;
            for(int j=0;j<gates;++j){
                fin >>in;
                tmp.eb(in);    
            }
            fin >>in;
            y.eb(in);
            x.eb(tmp);
        }
        fin.close();
    }
};

struct TreeNode{
    int feature_index, label, n0, n1;
    double threshold, gini;
    TreeNode *left, *right;
    TreeNode(int feature_index=-1,int label=-1,int n0=0,int n1=0,
            double threshold=0, double gini=1,
            TreeNode *left=nullptr, TreeNode *right=nullptr):
            feature_index(feature_index), label(label), n0(n0), n1(n1),
            threshold(threshold), gini(gini),
            left(left), right(right){}
};

class DecisionTree{
private:
    TreeNode *root;
    int max_depth, min_leaves;

public:
    //initialization
    DecisionTree(int min_l=5, int max_d=10){
        root=nullptr;
        min_leaves=min_l;
        max_depth=max_d;
    }

    //ginis
    double gini_index(const vector<int> &v){
        int n=v.size();
        if(!n)return 0;

        double p1=count(v.begin(), v.end(), 1)/(double)n;
        double p0=1.0-p1;
        
        return 1-(p0*p0+p1*p1);
    }

    double gini_gain(const vector<int> &y, const vector<int> &y_left, const vector<int> &y_right){
        double gini_origin=gini_index(y);
        double gini_new=(y_left.size()*gini_index(y_left)+y_right.size()*gini_index(y_right))/y.size();
        return gini_origin-gini_new;
    }

    //int is the feature id, and double is the threshold
    pair<int, double> best_split(const vector<vector<double>> &x, const vector<int> &y){
        int best_feature=-1;
        double best_threshold=numeric_limits<double>::max();
        double best_gain=-1;

        int n=x.size(), n_feature=x[0].size();
        for(int feature=0;feature<n_feature;++feature){
            //choose one of the features and put the feature value, label together
            vector<pair<double, int>> v;
            for(int i=0;i<n;++i){
                v.eb(m_p(x[i][feature], y[i]));
            }
            sort(v.begin(), v.end());
            double tmp_threshold;
            for(int i=1;i<n;++i){
                tmp_threshold=(v[i-1].ff+v[i].ff)/2.0;
                vector<int> y_left, y_right;
                for(int j=0;j<n;++j){
                    if(v[j].ff<tmp_threshold)y_left.eb(v[j].ss);
                    else y_right.eb(v[j].ss);
                }
                if(y_left.size()<min_leaves || y_right.size()<min_leaves)continue;
                double gain=gini_gain(y, y_left, y_right);
                if(gain>best_gain){
                    best_gain=gain;
                    best_feature=feature;
                    best_threshold=tmp_threshold;
                }

            }
        }
        return m_p(best_feature, best_threshold);
    }

    //build tree
    TreeNode *build(const vector<vector<double>> &x, const vector<int> &y, const int depth=0){
        int n0=count(y.begin(), y.end(), 0);
        int n1=y.size()-n0;

        if(y.size()<min_leaves || depth>=max_depth || gini_index(y)==0){
            return new TreeNode(-1, (bool)(n1>n0), n0, n1, 0, gini_index(y));
        }

        auto [feature, threshold]=best_split(x, y);
        if(feature==-1)return new TreeNode(-1, (bool)(n1>n0), n0, n1, 0, gini_index(y));

        vector<vector<double>> x_left, x_right;
        vector<int> y_left, y_right;

        for(int i=0;i<y.size();++i){
            if(x[i][feature]>threshold){
                x_right.eb(x[i]);
                y_right.eb(y[i]);
            }else{
                x_left.eb(x[i]);
                y_left.eb(y[i]);
            }
        }

        TreeNode *left_subtree=build(x_left, y_left, depth+1);
        TreeNode *right_subtree=build(x_right, y_right, depth+1);

        return new TreeNode(feature, -1, n0, n1, threshold, gini_index(y), left_subtree, right_subtree);

    }

    void fit(const vector<vector<double>> &x, const vector<int> &y){
        root=build(x, y);
        merge_same_labels(root);
    //    print_tree_to_dot(root);
    }

    int call_predict(const vector<double> x){
        return predict_one(x, root);
    }

    int predict_one(const vector<double> x, TreeNode *node){
        int feature=node->feature_index;
        double threshold=node->threshold;

        if(feature==-1)return node->label;
        if(x[feature]>threshold)return predict_one(x, node->right);
        else return predict_one(x, node->left);
    }

    vector<int> predict(const vector<vector<double>> &v){
        vector<int> tmp;
        for(auto i:v)tmp.eb(predict_one(i, root));
        return tmp;
    }

    double accuracy(const vector<vector<double>> &x, const vector<int> &y){
        vector<int> result=predict(x);
        int corrects=0;
        for(int i=0;i<y.size();++i){
            if(result[i]==y[i])++corrects;
        }
        return (double)corrects/(double)y.size();
    }

    //印出整棵樹，此段程式碼為ChatGpt協助生成
    void print_tree(TreeNode* node, int depth=0) {
        if (!node) return;
    
        // 產生縮進
        string indent(depth * 2, ' ');
    
        // 基本信息字符串
        string base_info = indent + "Depth " + to_string(depth) + ": ";
        base_info += "Samples = " + to_string(node->n0 + node->n1) + 
                     " (n0 = " + to_string(node->n0) + 
                     ", n1 = " + to_string(node->n1) + 
                     "), Gini = " + to_string(node->gini);
    
        if (node->feature_index == -1) {
            // 葉節點
            cout << base_info << ", Leaf Label = " << node->label << endl;
        } else {
            // 內部節點
            cout << base_info 
                 << ", Feature = " << node->feature_index 
                 << ", Threshold = " << node->threshold << endl;
            
            // 遞迴打印子樹
            print_tree(node->left, depth + 1);
            print_tree(node->right, depth + 1);
        }
    }

    TreeNode *get_root(){
        return root;
    }

    void merge_same_labels(TreeNode *node){
        if (!node or node->feature_index==-1) return;

        merge_same_labels(node->left);
        merge_same_labels(node->right);

        if (node->left->feature_index==-1 and node->right->feature_index==-1) {
            int left_label=node->left->label;
            int right_label=node->right->label;

            if (left_label==right_label) {
                int total_n0=node->left->n0+node->right->n0;
                int total_n1=node->left->n1+node->right->n1;
                
                delete node->left;
                delete node->right;
                
                node->feature_index=-1;
                node->threshold=0;
                node->label=left_label;
                node->n0=total_n0;
                node->n1=total_n1;
                node->left=nullptr;
                node->right=nullptr;
            }
        }
    }

    //把樹輸出成.dot檔，此段程式碼為ChatGpt協助生成
    void print_tree_to_dot(TreeNode* node, const string& filename = "decision_tree.dot") {
        if (!node) return;
    
        // 打開檔案
        ofstream fout(filename);
        if (!fout.is_open()) {
            cout << "無法創建檔案 " << filename << endl;
            return;
        }
    
        // 寫入 DOT 檔案頭部
        fout << "digraph DecisionTree {\n";
        fout << "    node [shape=box];\n";
    
        // 使用 map 儲存節點和其對應的 ID
        map<TreeNode*, string> node_ids;
        int id_counter = 0;
    
        // 使用 queue 進行層次遍歷
        queue<pair<TreeNode*, int>> q;
        q.push({node, 0});
    
        while (!q.empty()) {
            TreeNode* curr = q.front().first;
            int depth = q.front().second;
            q.pop();
    
            // 為當前節點分配 ID
            if (node_ids.find(curr) == node_ids.end()) {
                node_ids[curr] = "N" + to_string(id_counter++);
            }
            string curr_id = node_ids[curr];
    
            // 輸出節點資訊
            if (curr->feature_index == -1) { // 葉節點
                fout << "    " << curr_id << " [label=\"Label = " << curr->label
                     << "\\nSamples = " << (curr->n0 + curr->n1)
                     << " (n0 = " << curr->n0 << ", n1 = " << curr->n1 << ")"
                     << "\\nGini = " << fixed << setprecision(6) << curr->gini << "\"];\n";
            } else { // 內部節點
                fout << "    " << curr_id << " [label=\"Feature " << curr->feature_index
                     << ", Threshold = " << fixed << setprecision(3) << curr->threshold
                     << "\\nSamples = " << (curr->n0 + curr->n1)
                     << " (n0 = " << curr->n0 << ", n1 = " << curr->n1 << ")"
                     << "\\nGini = " << fixed << setprecision(6) << curr->gini << "\"];\n";
    
                // 處理左子節點
                if (curr->left) {
                    if (node_ids.find(curr->left) == node_ids.end()) {
                        node_ids[curr->left] = "N" + to_string(id_counter++);
                    }
                    fout << "    " << curr_id << " -> " << node_ids[curr->left]
                         << " [label=\"≤ " << fixed << setprecision(3) << curr->threshold << "\"];\n";
                    q.push({curr->left, depth + 1});
                }
    
                // 處理右子節點
                if (curr->right) {
                    if (node_ids.find(curr->right) == node_ids.end()) {
                        node_ids[curr->right] = "N" + to_string(id_counter++);
                    }
                    fout << "    " << curr_id << " -> " << node_ids[curr->right]
                         << " [label=\"> " << fixed << setprecision(3) << curr->threshold << "\"];\n";
                    q.push({curr->right, depth + 1});
                }
            }
        }
    
        // 寫入 DOT 檔案結尾
        fout << "}\n";
        fout.close();
        cout << "決策樹已儲存至 " << filename << endl;
    }

};

class RandomForest{
private:
    int n_trees;
    vector<DecisionTree> trees;
public:
    RandomForest(int n_trees=11):n_trees(n_trees){}

    // void fit(const vector<vector<double>> &x, const vector<int> &y){
    //     int N=y.size();

    //     random_device rd;
    //     mt19937 gen(rd());
    //     uniform_int_distribution<int> dist(0, N-1);

    //     for(int i=0;i<n_trees;++i){
    //         vector<vector<double>> x_sample;
    //         vector<int> y_sample;

    //         for(int j=0;j<N;++j){
    //             int index=dist(gen);
    //             x_sample.eb(x[index]);
    //             y_sample.eb(y[index]);
    //         }

    //         DecisionTree tmp;
    //         tmp.fit(x_sample, y_sample);
    //         trees.eb(tmp);
    //     }
    // }

    void fit(const vector<vector<double>> &x, const vector<int> &y){
        int N = y.size();
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(0, N - 1);
    
        vector<thread> threads;
        vector<DecisionTree> tmp_trees(n_trees);
    
        for(int i = 0; i < n_trees; ++i){
            threads.emplace_back([&, i]() {
                vector<vector<double>> x_sample;
                vector<int> y_sample;
    
                for(int j = 0; j < N; ++j){
                    int index = dist(gen);
                    x_sample.eb(x[index]);
                    y_sample.eb(y[index]);
                }
    
                DecisionTree tmp;
                tmp.fit(x_sample, y_sample);
                tmp_trees[i] = tmp;  // 每個 thread 寫到自己位置
            });
        }
    
        for(auto &t : threads) t.join();  // 等待所有樹完成
    
        trees = std::move(tmp_trees);  // 搬到 class 成員
    }

    int predict_one(const vector<double> &x){
        int result=0;
        for(auto &tree:trees)result+=tree.call_predict(x);
        return result>trees.size()/2;
    }

    vector<int> predict(const vector<vector<double>> &x){
        vector<int> result;
        for(auto &i:x){
            result.eb(predict_one(i));
        }
        return result;
    }

    double accuracy(const vector<vector<double>> &x, const vector<int> &y){
        int corrects=0;
        vector<int> result=predict(x);
        for(int i=0;i<y.size();++i)corrects+=(result[i]==y[i]);
        return (double)corrects/(double)y.size();
    }


};
