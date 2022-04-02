//https://atcoder.jp/contests/dp/tasks/dp_c
#include<bits/stdc++.h>
using namespace std;

int a[100005],b[100005],c[100005],dp[100005][3],n;

int main(){
    cin >>n;
    for(int i=1;i<=n;++i)cin >>a[i];
    for(int i=1;i<=n;++i)cin >>b[i];
    for(int i=1;i<=n;++i)cin >>c[i];

    for(int i=1;i<=n;++i){
        dp[i][0]=min(dp[i-1][1],dp[i-1][2])+a[i];
        dp[i][1]=min(dp[i-1][0],dp[i-1][2])+b[i];
        dp[i][2]=min(dp[i-1][1],dp[i-1][0])+c[i];
    }
    cout<<min({dp[n][0],dp[n][1],dp[n][2]})<<'\n';

}

