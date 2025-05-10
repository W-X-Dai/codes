#include <bits/stdc++.h>
using namespace std;

int main() {
    srand(time(0));
    vector<pair<int, int>> config = {
        {100, 20},
        {200, 40},
        {300, 60},
        {400, 80}
    };

    for(int t = 0; t < config.size(); ++t){
        int n = config[t].first;
        int m = config[t].second;
        string fname = "q617_0" + to_string(t + 2) + ".in";
        ofstream fout(fname);

        fout << n << " " << m << '\n';

        // 分數：1 ~ 100
        for(int i = 1; i <= n; ++i){
            int val = rand() % 100 + 1;
            fout << val << " \n"[i == n];
        }

        // 打亂節點順序後串成鏈
        vector<int> nodes(n);
        iota(nodes.begin(), nodes.end(), 1);
        std::mt19937 rng(42); // Use a fixed seed for consistent results
        std::shuffle(nodes.begin(), nodes.end(), rng);

        for(int i = 0; i < n - 1; ++i){
            fout << nodes[i] << " " << nodes[i + 1] << '\n';
        }
    }

    return 0;
}
