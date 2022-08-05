#include<bits/stdc++.h>
using namespace std;

int k[100005],vis[100005],s,n,cnt;

inline void open(int x){
//    cout<<x<<" "<<k[x]<<'\n';
    if(!x || vis[x])return;
 
    ++cnt,vis[x]=1;
    open(k[x]);
}

inline void sol(){
    ios::sync_with_stdio(0),cin.tie(0);
    memset(vis,0,sizeof(vis));
    cin >>n>>s;
    for(int i=1;i<=n;++i)cin >>k[i];
    open(s);
    cout<<cnt<<'\n';   
}

int main(){
    sol();
}