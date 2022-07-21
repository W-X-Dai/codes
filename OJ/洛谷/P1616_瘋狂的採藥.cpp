#include<bits/stdc++.h>
#define int long long
using namespace std;

int t,m;
int v[10005],w[10005],dp[10000005];

signed main(){
    ios::sync_with_stdio(0),cin.tie(0);
    
    cin >>t>>m;
    for(int i=1;i<=m;++i)cin >>w[i]>>v[i];
    for(int i=1;i<=m;++i)
        for(int j=w[i];j<=t;++j)
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
    
    cout<<dp[t]<<'\n';
}