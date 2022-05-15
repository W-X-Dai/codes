#include<bits/stdc++.h>
using namespace std;

int w[105],v[105],dp[105][100005];
int n,m;

int main(){
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