#include "decision_tree.h"
#include <bits/stdc++.h>
using namespace std;

class RandomForest {
private:
    int n_trees;                  // 森林中要訓練的樹數量
    vector<DecisionTree> trees;   // 用來儲存所有的決策樹

public:
    // 可自行決定要多少棵樹
    RandomForest(int n_trees = 10) : n_trees(n_trees) {}

    // fit: 利用 Bootstrap Sampling 訓練每一棵樹
    void fit(const vector<vector<double>> &X, const vector<int> &Y) {
        // 取得原始資料集大小
        int N = X.size();

        // 建立亂數引擎 (只需建立一次)
        random_device rd;
        mt19937 gen(rd());
        uniform_int_distribution<int> dist(0, N - 1);

        for(int i = 0; i < n_trees; ++i) {
            // 建立一個新訓練集 (x_sample, y_sample) 進行有放回抽樣
            vector<vector<double>> x_sample;
            vector<int> y_sample;
            x_sample.reserve(N);
            y_sample.reserve(N);

            // 每次抽 N 筆
            for(int j = 0; j < N; j++){
                int idx = dist(gen);  // 從 [0..N-1] 中隨機取一個索引
                x_sample.push_back(X[idx]);
                y_sample.push_back(Y[idx]);
            }

            // 建立並訓練一棵決策樹
            DecisionTree dt(5, 10);   // 可在這裡調整 min_leaves, max_depth
            dt.fit(x_sample, y_sample);

            // 推入森林
            trees.push_back(dt);
        }
    }

    // 單筆資料投票
    int predict_one(const vector<double> &sample) {
        // 投票計數
        unordered_map<int, int> votes;
        for(auto &tree : trees) {
            int pred = tree.call_predict(sample);
            votes[pred]++;
        }
        // 找出投票最多的那個類別
        int best_label = -1;
        int best_count = -1;
        for(auto &v : votes) {
            if(v.second > best_count) {
                best_count = v.second;
                best_label = v.first;
            }
        }
        return best_label;
    }

    // 對多筆資料進行預測
    vector<int> predict(const vector<vector<double>> &X) {
        vector<int> results;
        results.reserve(X.size());
        for(const auto &sample : X) {
            results.push_back(predict_one(sample));
        }
        return results;
    }

    // 計算準確率
    double accuracy(const vector<vector<double>> &X, const vector<int> &Y) {
        auto preds = predict(X);
        int correct = 0;
        for(size_t i = 0; i < Y.size(); ++i) {
            if(preds[i] == Y[i]) correct++;
        }
        return (double)correct / (double)Y.size();
    }
};

//x is the features, y is the label
vector<vector<double>> xx;
vector<int> yy;

//read data
void read_check_data(string file_name, int gates, int n){
    fstream fin(file_name, ios::in), fout("testdata", ios::out);
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
        if(i>600){
            yy.eb(in);
            xx.eb(tmp);
        }
        
    }
    for(int i=0;i<yy.size();++i){
        for(auto ii:xx[i])fout<<ii<<" ";
        fout<<yy[i]<<'\n';
    }
    fin.close();
}

int main(){
    // 假設 data 檔名為 "data", 有 7 個特徵, 總筆數 640
    read_data("data", 7, 640);

    // 建立一個隨機森林, 預設有 10 棵樹
    RandomForest forest(10);

    // 使用 Bootstrap Sampling 訓練
    forest.fit(x, y);

    // 測試在同一組資料上的準確率(示範)
    double acc = forest.accuracy(x, y);
    cout << "Train Accuracy: " << acc << "\n";

    read_data("testdata", 7, 20);
    acc = forest.accuracy(x, y);
    cout << "Chcek Accuracy: " << acc << "\n";

    return 0;
}
