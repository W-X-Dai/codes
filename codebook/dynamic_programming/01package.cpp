//normal http://infor.ylsh.ilc.edu.tw/problem/5
#include<bits/stdc++.h>
using namespace std;

int n,m,v[105],w[105];
int dp[105][100005];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>m;
    for(int i=1;i<=n;++i)cin >>w[i];
    for(int i=1;i<=n;++i)cin >>v[i];

    for(int i=1;i<=n;++i){
        for(int j=0;j<=m;++j){
            if(w[i]>j)dp[i][j]=dp[i-1][j];
            else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
        }
    }
    cout<<dp[n][m]<<'\n';
}