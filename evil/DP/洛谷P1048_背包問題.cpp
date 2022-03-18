#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[105][105];
ll t[105],p[105];
ll T,M;

int main(){
	cin >>T>>M;
	for(int i=1;i<=M;i++){
		cin >>t[i]>>p[i];
	}
	int j=T;
	for(int i=1;i<=M;i++){
		if(t[i]>j)dp[i][j]=dp[i-1][j];
		else dp[i][j]=max(dp[i-1][j],dp[i-1][j-t[i]]+p[i]);
	}
	
	cout<<dp[M][j]<<'\n';
}

