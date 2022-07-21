#include<bits/stdc++.h>
using namespace std;

int n,dp[1000005];
const int mod=1e9+7;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    dp[1]=1,dp[2]=2;


    cin >>n;
    for(int i=3;i<=n;++i){
        if(i<=6){
            ++dp[i];
            for(int j=1;j<i;++j){
                dp[i]+=dp[j];
            }
        }else{
            for(int j=i-6;j<i;++j){
                dp[i]+=dp[j];
                dp[i]%=mod;
            }
        }
    }
    cout<<dp[n]<<'\n';

}