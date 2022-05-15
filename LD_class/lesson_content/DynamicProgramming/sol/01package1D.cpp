#include<bits/stdc++.h>
using namespace std;

int w[105],v[105],dp[2][100005];
int n,m;

int main(){
    cin >>n>>m;
    for(int i=1;i<=n;++i)cin >>w[i];
    for(int i=1;i<=n;++i)cin >>v[i];

	for(int i=1;i<=n;++i){
		for(int j=0;j<=m;++j){
			if(w[i]>j)dp[i%2][j]=dp[(i-1)%2][j];
			else dp[i%2][j]=max(dp[(i-1)%2][j],dp[(i-1)%2][j-w[i]]+v[i]);
		}
	}
    cout<<dp[n%2][m]<<'\n';
}