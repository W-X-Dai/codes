#include<bits/stdc++.h>
#define eb emplace_back

using namespace std;

vector<int> v[1000];
int n,m,a,w[1000],dp[1000];

inline void dfs(int root){
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>m;++m;
    for(int i=0;i<n;++i){
        cin >>a>>w[i];
        if(!a)v[0].eb(i);
        else v[a].eb(i);

    }
}