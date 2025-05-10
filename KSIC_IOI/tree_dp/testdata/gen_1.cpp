#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 10; // 可調整 < 20
    int m = 5;  // 可調整 < 20
    ofstream fout("q617_01.in");

    fout << n << " " << m << '\n';

    // 節點分數 [-10, 10]
    for (int i = 1; i <= n; ++i) {
        fout << (rand() % 21) << " \n"[i == n];
    }

    // 建樹：生成一棵隨機樹（父 -> 子）
    vector<pair<int,int>> edges;
    for (int i = 2; i <= n; ++i) {
        int parent = rand() % (i - 1) + 1;
        edges.emplace_back(parent, i);
    }
    for (auto [a, b] : edges) fout << a << " " << b << '\n';

    return 0;
}
