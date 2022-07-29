#include<bits/stdc++.h>
using namespace std;

int c[105],dp[1000005],n,x;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>x;
    for(int i=0;i<n;++i)cin >>c[i];

    for(int i=0;i<n;++i){
        int coin=c[i];
        for(int j=coin;j<=x;++j){
            dp[j]+=dp[j-coin];
        }
    }

    
}