#include<bits/stdc++.h>
#define ll long long
#define MXN 100005
using namespace std;
int main(){
	int n;
	int arr[MXN],dp[MXN];
	//dp[i]:前i天工作的最大酬勞 
	
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >>arr[i];
	}
	
	dp[0]=0;
	dp[1]=arr[1];
	
	for(int i=2;i<=n;i++){
		dp[i]=max(dp[i-1],arr[i]+dp[i-2]);
	} 
	cout<<dp[n]<<'\n';
}

