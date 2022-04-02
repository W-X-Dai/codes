#include<iostream>
using namespace std;

int dp[100005],n,x;

int main(){
    dp[1]=1,dp[2]=2;

    cin >>n;
    for(int i=3;i<100005;++i){
        dp[i]=(dp[i-1]+dp[i-2])%10000007;
    }
    for(int i=0;i<n;++i){
        cin >>x;
        cout<<dp[x]<<'\n';
    }
}
