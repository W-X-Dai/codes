#include <bits/stdc++.h>
#define ll long long
#define eb emplace_back
using namespace std;

int n,col[200005],pre[200005],rtd[200005],ans[200005];
vector<int> v[200005];

inline int dfs(int root){
    cout<<root<<'\n';
    pre[root]+=col[root];
    if(v[root].empty())return col[root];
//    if(pre[root]!=0)return pre[root];
    for(auto i:v[root]){
        pre[root]+=dfs(i);
    }
}

inline void sol(int n){
    ios::sync_with_stdio(0),cin.tie(0);
    int mx=abs(ans[n]);
    for(int i:v[n]){
    //    cout<<i<<" ";
        mx=max(mx,abs(pre[i]));
    }
    //cout<<'\n';
    for(int i:v[n]){
        ans[i]=mx;
    }    
    cout<<mx<<" ";
 
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    for(int i=1;i<=n;++i){
        cin >>col[i];
        if(col[i]==0)col[i]=-1;
    }

    for(int i=1;i<=n-1;++i){
        int a,b;

        cin >>a>>b;
        v[a].eb(b);
        rtd[b]=1;
    }
    for(int i=1;i<=n;++i){
        if(rtd[i]==0)rtd[0]=i;
    }
    dfs(rtd[0]);
    
    for(int i=1;i<=n;++i){
        cout<<pre[i]<<" ";
    }
    for(int i=1;i<=n;++i){
    //    sol(i);
    }
    cout<<'\n';
}