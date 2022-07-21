//memory limit:1D array
#include<bits/stdc++.h>
using namespace std;

int n,m,v[105],w[105];
int dp[100005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>m;
    for(int i=1;i<=n;++i)cin >>w[i];
    for(int i=1;i<=n;++i)cin >>v[i];

    for(int i=1;i<=n;++i){
        for(int j=m;j>=w[i];--j){
            dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
        }
    }
    cout<<dp[m]<<'\n';
}