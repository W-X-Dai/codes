#include<bits/stdc++.h>
using namespace std;

int n,arr[100005],dp[100005];

int main(){
	cin >>n;
	for(int i=1;i<=n;++i)cin >>arr[i];

	dp[1]=0;dp[2]=abs(arr[1]-arr[2]);
	for(int i=3;i<=n;++i)
		dp[i]=min(dp[i-1]+abs(arr[i]-arr[i-1]),dp[i-2]+abs(arr[i]-arr[i-2]));

	//for(int i=1;i<=n;++i)cout<<dp[i]<<" \n"[i==n];

	cout<<dp[n]<<'\n';

}