#include<bits/stdc++.h>
#define eb emplace_back
#define m_p make_pair
#define pii pair<int,int>
#define ff first
#define ss second

using namespace std;

const int N=500005;
int n,mx,d1[N],d2[N],vis[N];
vector<pii> v[N];

inline void dfs(int root,int fa){
    for(auto i:v[root]){
        if(i.ff==fa)continue;
        dfs(i.ff,root);
        
        int t=d1[i.ff]+i.ss;
        if(t>d1[root])
            d2[root]=d1[root],d1[root]=t;
        else if(t>d2[root])
            d2[root]=t;
    }
    mx=max(mx,d1[root]+d2[root]);
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n;
    for(int i=0;i<n-1;++i){
        int a,b,c;
        cin >>a>>b>>c;
        v[a].eb(m_p(b,c));
        v[b].eb(m_p(a,c));
    }
    dfs(1,0);
    cout<<mx<<'\n';
}