#include<bits/stdc++.h>
#define mod 100007
using namespace std;


int v[105],w[1005],sum[105],tpow[105],dp[105][1005][105],n,m;

int main(){
    tpow[0]=1;
    for(int i=1;i<=102;++i)tpow[i]=(2*tpow[i-1])%mod;

    cin >>n>>m;
    for(int i=1;i<=n;++i)cin >>w[i];
    for(int i=1;i<=n;++i)cin >>v[i];

    for(int i=1;i<=n;++i){
        for(int j=0;j<=m;++j){
            for(int k=1;k<=i;++k){
                if(dp[i-1][j][0]);
            }
        }
    }
}