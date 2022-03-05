#include<bits/stdc++.h>
#define ll long long
#define MXN 105
using namespace std;
	
int n,W;
int p[MXN],w[MXN],dp[MXN][100005];

int main(){
	freopen("a_02.in","r",stdin);
	freopen("a_02.out","w",stdout);
	
	cin >>n>>W;
	for(int i=1;i<=n;++i)
		cin >>w[i];
	for(int i=1;i<=n;++i)
		cin >>p[i];
	
	dp[1][W]=p[1];
	for(int i=1;i<=n;++i){
		for(int j=0;j<=W;++j){
			if(i*j==0)dp[i][j]=0;
			else if(w[i]>j)dp[i][j]=dp[i-1][j];
			else dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]);
		}
	}
	cout<<dp[n][W];
}
//dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+p[i]
//
//
//
//
//
//
//
