#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n,x,y;
    cin>>n>>x>>y;

    long long dp[40];
    dp[0]=0,dp[1]=1,dp[2]=2;

    for(int i=3;i<=n;++i){
        dp[i]=(x*dp[i-1]+y*dp[i-2])%1000000000;
    }
    cout<<dp[n];
}

