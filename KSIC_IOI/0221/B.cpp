#include<bits/stdc++.h>
using namespace std;

int main(){
	int N=100005;
	int n,a[N],b[N],c[N],dp[3][N];
	
	cin>>n;
	for(int i=1;i<=n;++i)cin >>a[i];
	for(int i=1;i<=n;++i)cin >>b[i];
	for(int i=1;i<=n;++i)cin >>c[i];

	dp[0][1]=a[1];
	dp[1][1]=b[1];
	dp[2][1]=c[1];

	for(int i=2;i<=n;++i){
		dp[0][i]=a[i]+max(dp[1][i-1],dp[2][i-1]);
		dp[1][i]=b[i]+max(dp[0][i-1],dp[2][i-1]);
		dp[2][i]=c[i]+max(dp[0][i-1],dp[1][i-1]);
	}

	cout<<max(dp[0][n],max(dp[1][n],dp[2][n]))<<'\n';
}