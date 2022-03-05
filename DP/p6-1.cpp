#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll cost[100005],dp[100005];

int main(){
	int n;
	cin >>n;
	for(int i=1;i<=n;i++)cin >>cost[i];
	dp[1]=cost[1];dp[2]=cost[2];
	for(int i=3;i<=n;i++){
		dp[i]=cost[i]+min(dp[i-1],dp[i-2]);
	}
	cout<<dp[n];
	
}

