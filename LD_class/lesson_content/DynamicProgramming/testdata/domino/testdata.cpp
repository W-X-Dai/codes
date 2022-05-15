#include<bits/stdc++.h>
using namespace std;

int dp[1000005];

int main(){
    ofstream f("A1.in",ios::trunc),f2("A1.out",ios::trunc);
    f<<1000000;
    for(int i=0;i<1000000;++i){
        f<<i+1<<'\n';
    }
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<1000001;++i){
        dp[i]=(dp[i-1]+dp[i-2])%10000007;
    }
    for(int i=0;i<1000000;++i){
        f2<<dp[i+1]<<'\n';
    }
}