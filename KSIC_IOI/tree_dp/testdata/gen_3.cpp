#include <bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
using namespace std;

unsigned seed = chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed);
uniform_int_distribution<int> dist1_10(1, 10);
uniform_int_distribution<int> weight_dist(1, 100);

vector<int> v[100005];
vector<pii> edges;
int arr[100005];

void make_tree(int n, string filename) {
    edges.clear();
    for(int i=0;i<=n;++i)v[i].clear();

    // 打亂節點 ID
    iota(arr+1, arr+n+1, 1);
    shuffle(arr+1, arr+n+1, rd);

    int chi = 2;
    for(int i=1; chi <= n; ++i){
        int deg = dist1_10(rd); // 每個點最多連接 1~10 個子節點
        for(int j=1; chi <= n && j <= deg; ++j){
            v[i].eb(chi++);
        }
    }

    for(int i=1; i<=n; ++i){
        int ori = i;
        i = arr[i];
        for(int j:v[i]){
            edges.eb(m_p(arr[i], arr[j]));
        }
        i = ori;
    }

    ofstream fout(filename);
    fout << n << " " << n << '\n'; // n = m

    for(int i=1; i<=n; ++i){
        fout << weight_dist(rd) << " \n"[i == n];
    }

    shuffle(edges.begin(), edges.end(), rd);
    for(auto [a,b] : edges){
        fout << a << " " << b << '\n';
    }
}

int main() {
    vector<int> sizes = {100, 200, 300, 400, 499};
    for(int i=0;i<5;++i){
        string name = "q617_0" + to_string(i+6) + ".in";
        make_tree(sizes[i], name);
    }
    return 0;
}