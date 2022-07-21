#include<bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;

int n,m,t;
int dp[100005],w[105],v[105];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    fill(dp,dp+100005,inf);

    cin >>n>>m;
    for(int i=1;i<=n;++i)cin >>w[i];
    for(int i=1;i<=n;++i)cin >>v[i],t+=v[i];

    for(int i=1;i<=n;++i){
        for(int j=v[i];j<=t;++j)
            dp[j]=min(dp[j],dp[j-v[i]]+w[i]);
    }
    cout<<dp[m]<<'\n';
}
