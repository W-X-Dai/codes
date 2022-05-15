#include<bits/stdc++.h>
#define N 100005
#define eb emplace_back
using namespace std;

int n,m;
int ori[N],bad[N];

vector<int> v[100005];

inline void dfs(int root){
    if(bad[root]=1)return;
    bad[root]=1;
    for(int i:v[root]){
        dfs(i);
    }
}

int main(){
    cin >>n>>m;
    for(int i=0;i<m;++i)cin >>ori[i];
    for(int i=0;i<n-1;++i){
        int a,b;
        cin >>a>>b;
        v[a].eb(b);
    }
    for(int i=1;i<=n;++i){
        cout<<(bad[i] ^ 1)<<" ";
    }
    cout<<'\n';
}