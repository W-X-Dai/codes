#include<bits/stdc++.h>
#define pii pair<int,int>
#define m_p make_pair
#define ff first
#define ss second
#define eb emplace_back
#define int long long

using namespace std;

int n,k,cnt,w[100005];
vector<pii> v[100005];

inline void dfs(int root,int fa){
//    cout<<root<<'\n';
    for(auto i:v[root]){
        if(i.ff==fa)continue;
    //    cout<<i.ff<<" ";cout<<'\n';
        dfs(i.ff,root);

        if(w[i.ff]>k){
            cnt+=(w[i.ff]-k)*i.ss;
            w[root]+=(w[i.ff]-k);
        }else{
            cnt+=(k-w[i.ff])*i.ss;
            w[root]-=(k-w[i.ff]);
        }
    }
}

signed main(){
    cin >>n>>k;
    for(int i=1;i<=n;++i)cin >>w[i];
    for(int i=0;i<n-1;++i){
        int a,b,c;
        cin >>a>>b>>c;
        v[a].eb(m_p(b,c));
        v[b].eb(m_p(a,c));
    }
    dfs(1,0);
    cout<<cnt<<'\n';
}