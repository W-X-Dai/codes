#include<bits/stdc++.h>
#define ll long long
#define MXN 100005
using namespace std;
int main(){
	int n;
	int arr[MXN],dp[MXN];
	//dp[i]:選到第i天的最小值 
	
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >>arr[i];
	}
	
	dp[0]=0;
	dp[1]=arr[1];
	dp[2]=arr[2];
	dp[3]=arr[3]+min(dp[1],dp[2]);
	
	for(int i=4;i<=n;i++){
		dp[i]=arr[i]+min({dp[i-1],dp[i-2],dp[i-3]});
	} 
	cout<<min(dp[n],dp[n-1])<<'\n';
}

