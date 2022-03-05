#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int dp[10000];
	int n,i;
	dp[0]=1;
	dp[1]=1;
	
	cin >>n;
	for(i=2;i<n;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	cout<<dp[n-1]<<'\n';
}

