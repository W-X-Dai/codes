#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,mx,d1[100005],d2[100005];
vector<int> v[100005];

inline void dfs(int root,int fa){
    for(int i:v[root]){
        if(i==fa)continue;
        dfs(i,root);
        
        int t=d1[i]+1;
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
        int a,b;
        cin >>a>>b;
        v[a].eb(b),v[b].eb(a);
    }
    dfs(1,0);
    cout<<mx<<'\n';
}