#include <bits/stdc++.h>
#define eb emplace_back
#define m_p make_pair
#define ff first
#define ss second
using namespace std;

double data_input[7][640];

// x 是特徵, y 是標籤
vector<vector<double>> x;
vector<int> y;

// 讀取資料
void read_data(string file_name, int gates, int n){
    fstream fin(file_name, ios::in);
    if(!fin.is_open())cout<<"error";

    vector<double> tmp;
    double in;
    for(int i=0;i<n;++i){
        tmp.clear();
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
    // 初始化
    DecisionTree(int min_l=5, int max_d=10){
        root=nullptr;
        min_leaves=min_l;
        max_depth=max_d;
    }

    // 計算 Gini
    double gini_index(const vector<int> &v){
        int n=v.size();
        if(!n) return 0;

        double p1 = count(v.begin(), v.end(), 1)/(double)n;
        double p0 = 1.0 - p1;
        
        return 1 - (p0*p0 + p1*p1);
    }

    // 計算 Gini 增益
    double gini_gain(const vector<int> &y, const vector<int> &y_left, const vector<int> &y_right){
        double gini_origin = gini_index(y);
        double gini_new = (y_left.size()*gini_index(y_left) + y_right.size()*gini_index(y_right)) / y.size();
        return gini_origin - gini_new;
    }

    // 選擇最佳切分 (回傳最佳特徵和其閾值)
    pair<int, double> best_split(const vector<vector<double>> &x, const vector<int> &y){
        int best_feature = -1;
        double best_threshold = numeric_limits<double>::max();
        double best_gain = -1;

        int n = x.size(), n_feature = x[0].size();
        for(int feature = 0; feature < n_feature; ++feature){
            // 先把所有 (特徵值, 標籤) 收集起來並排序
            vector<pair<double, int>> v;
            v.reserve(n);
            for(int i=0; i<n; ++i){
                v.eb(m_p(x[i][feature], y[i]));
            }
            sort(v.begin(), v.end());

            // 一個一個嘗試中間值當作閾值
            for(int i=1; i<n; ++i){
                double tmp_threshold = (v[i-1].ff + v[i].ff) / 2.0;
                vector<int> y_left, y_right;
                for(int j=0; j<n; ++j){
                    if(v[j].ff < tmp_threshold) y_left.eb(v[j].ss);
                    else                       y_right.eb(v[j].ss);
                }
                // 如果分完有一邊太少樣本，跳過
                if(y_left.size() < min_leaves || y_right.size() < min_leaves) continue;

                // 計算此分割方式的 Gini 增益
                double gain = gini_gain(y, y_left, y_right);
                if(gain > best_gain){
                    best_gain = gain;
                    best_feature = feature;
                    best_threshold = tmp_threshold;
                }
            }
        }
        return m_p(best_feature, best_threshold);
    }

    // 建立樹 (遞迴)
    TreeNode *build(const vector<vector<double>> &x, const vector<int> &y, const int depth = 0){
        int n0 = count(y.begin(), y.end(), 0);
        int n1 = y.size() - n0;

        // 終止條件：資料太少、樹深度超過限制、或節點 Gini 為 0（單一類別）
        if((int)y.size() < min_leaves || depth > max_depth || gini_index(y) == 0){
            // 直接回傳葉節點，標籤為哪一類比較多就哪一類
            return new TreeNode(-1, (int)(n1 > n0));
        }

        // 找最佳切分
        auto [feature, threshold] = best_split(x, y);
        // 如果找不到有效的切分 (best_feature = -1)，一樣回傳葉節點
        if(feature == -1) {
            return new TreeNode(-1, (int)(n1 > n0));
        }

        // 分資料
        vector<vector<double>> x_left, x_right;
        vector<int> y_left, y_right;
        x_left.reserve(y.size());
        x_right.reserve(y.size());
        y_left.reserve(y.size());
        y_right.reserve(y.size());
        for(int i=0; i<(int)y.size(); ++i){
            if(x[i][feature] > threshold){
                x_right.eb(x[i]);
                y_right.eb(y[i]);
            } else {
                x_left.eb(x[i]);
                y_left.eb(y[i]);
            }
        }

        // 進一步遞迴建立子樹
        TreeNode *left_subtree = build(x_left, y_left, depth+1);
        TreeNode *right_subtree = build(x_right, y_right, depth+1);

        // 建立當前節點（非葉），並把子樹接上
        return new TreeNode(feature, -1, n0, n1, threshold, gini_index(y), left_subtree, right_subtree);
    }

    // 對外的建樹接口
    void fit(const vector<vector<double>> &x, const vector<int> &y){
        root = build(x, y);
    }

    // 單筆資料做預測（遞迴尋路）
    int predict_one(const vector<double> &x, TreeNode *node){
        // 如果是葉節點就直接回傳標籤
        if(node->feature_index == -1) return node->label;

        // 否則看特徵值比對閾值大小，決定走左還是右
        if(x[node->feature_index] > node->threshold) return predict_one(x, node->right);
        else return predict_one(x, node->left);
    }

    // 批量預測
    vector<int> predict(const vector<vector<double>> &v){
        vector<int> tmp;
        tmp.reserve(v.size());
        for(auto &i : v){
            tmp.eb(predict_one(i, root));
        }
        return tmp;
    }

    // 計算正確率
    double accuracy(const vector<vector<double>> &x, const vector<int> &y){
        vector<int> result = predict(x);
        int corrects = 0;
        for(int i=0; i<(int)y.size(); ++i){
            if(result[i] == y[i]) ++corrects;
        }
        return (double)corrects / (double)y.size();
    }

    // ====== 新增：輸出整棵樹的函式 ======
    // 這裡用遞迴方式，依深度縮排並印出當前節點是葉子還是內部節點
    void printTree(TreeNode* node, int depth = 0){
        if(!node) return; // 安全檢查

        // 印出縮排（depth 越深，前面印越多空白或 tab）
        for(int i = 0; i < depth; ++i){
            cout << "    "; // 可以換成其他符號做視覺化，如 "|   "
        }

        // 如果是葉節點
        if(node->feature_index == -1){
            cout << "[Leaf] label = " << node->label << "\n";
        } 
        // 如果是內部節點
        else {
            // 顯示當前節點的特徵編號、閾值、Gini 等等資訊
            cout << "[Node] feature = " << node->feature_index
                 << ", threshold = " << node->threshold
                 << ", n0 = " << node->n0
                 << ", n1 = " << node->n1
                 << ", gini = " << node->gini << "\n";
        }

        // 走訪左子樹
        if(node->left){
            printTree(node->left, depth + 1);
        }
        // 走訪右子樹
        if(node->right){
            printTree(node->right, depth + 1);
        }
    }

    // 對外的「列印樹」介面：由 root 出發
    void print(){
        printTree(root, 0);
    }
};

int main(){
    DecisionTree tree;
    // 讀訓練資料
    read_data("data", 7, 640);
    // 建立決策樹
    tree.fit(x, y);

    // 輸出整棵樹結構
    cout << "=== Decision Tree Structure ===" << endl;
    tree.print();
    cout << "===============================" << endl << endl;

    // 看看訓練資料的準確度
    cout << "Accuracy on training data: " << tree.accuracy(x, y) << '\n';

    // 讀測試資料
    read_data("testdata", 7, 20);
    // 看看測試資料的準確度
    cout << "Accuracy on test data: " << tree.accuracy(x, y) << '\n';

    return 0;
}
