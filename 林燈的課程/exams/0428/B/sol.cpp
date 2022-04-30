#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long

using namespace std;

ll arr[3005],t,n,m;
ll dp[3005][3005];

int main(){
    for(int i=1;i<=3000;++i){
        dp[i][1]=i;
    }
    for(int i=2;i<=3000;++i){
        for(int j=2;j<=3000;++j){
            dp[i][j]=(dp[i-1][j-1]+dp[i-1][j])%mod;
        }
    }
    cin >>t;
    for(int i=0;i<t;++i){
        cin >>n>>m;
        cout<<dp[n][m]<<'\n';
    }
    
}