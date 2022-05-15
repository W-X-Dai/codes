#include <bits/stdc++.h>
using namespace std ;
 
vector<int> g[100010] ;
int lev[100010], tar ;
 
void dfs(int x, int p) {
    lev[x] = lev[p] + 1 ;
    if(lev[x] > lev[tar])
        tar = x ;
    for(auto i:g[x]) if(i != p)
        dfs(i, x) ;
}
 
int main() {
    int n,a,b;cin>>n;
    // input g
    for(int i=1;i<n;++i){
        cin>>a>>b;
        g[a].emplace_back(b);
        g[b].emplace_back(a);
    }
    for(int i=1; i<=n; ++i)
        lev[i] = 0 ;
    dfs(1, 0) ;
    for(int i=1; i<=n; ++i)
        lev[i] = 0 ;
    int S = tar ;
    dfs(S, 0) ;
    int T = tar ;
    cout <<lev[T]-1<< endl ;
}