#include<bits/stdc++.h>
using namespace std;

int arr[1005][1005],dp[1005][1005];
int n,mod=1e9+7;

inline void init(){
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            char x;cin >>x;
            arr[i][j]=(x=='.' ? 1 : 0 );
        }
    }
}


int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n;
    init();

    dp[0][1]=arr[1][1];
    for(int i=1;i<=n;++i){
        for(int j=1;j<=n;++j){
            dp[i][j]=(arr[i][j] ? dp[i][j-1]+dp[i-1][j] : 0 )%mod;
        //    cout<<dp[i][j]<<" ";
        }
    //    cout<<'\n';
    }

    cout<<dp[n][n]<<'\n';
}