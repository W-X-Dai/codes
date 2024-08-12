#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n;
vector<int> v[N];
pii arr[N];

void dfs(set<int> s,int root,int dep){
    for(auto i:v[root]){
        
    }
}

inline void init(){
	cin >>n;
	for(int i=1;i<=n;++i){
        int x;cin >>x;
        v[x].eb(i);
    }
}

inline void sol(){
    int ans=0;
    
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
