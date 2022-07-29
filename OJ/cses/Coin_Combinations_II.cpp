#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int c[1000005],dp[1000005];
int n,x;


int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>x;
    for(int i=0;i<n;++i)cin >>c[i];dp[0]=1;

    for(int j=0;j<n;++j){
        int coin=c[j];
        for(int i=coin;i<=x;++i){
            dp[i]+=dp[i-coin];
            dp[i]%=mod;
        }
    }
    cout<<dp[x]<<'\n';
}