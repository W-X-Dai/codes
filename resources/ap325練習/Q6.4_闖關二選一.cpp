#include<bits/stdc++.h>
#define ll long long
#define MXN 100005
using namespace std;
int main(){
	int n,t,ans=0;
	int cost[MXN][2],dp[MXN][2];
	
	cin >>n>>t;
	for(int i=1;i<=n;i++){
		cin >>cost[i][0];
		cin >>cost[i][1];
	}
	
	dp[1][0]=abs(t-cost[1][0]);
	dp[1][1]=abs(t-cost[1][1]);
	
	for(int i=2;i<=n;i++){
		
		
		dp[i][0]=dp[i-1][0]
				+abs(min(cost[i][0]-cost[i-1][0],cost[i][0]-cost[i-1][1]));
		dp[i][1]=dp[i-1][1]
				+abs(min(cost[i][1]-cost[i-1][1],cost[i][1]-cost[i-1][1]));
	}
	cout<<min(dp[n][0],dp[n][1])<<'\n';
	
}

