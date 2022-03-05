#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int dp[10000],i,n;
	dp[1]=1;
	dp[2]=1;
	
	for(i=3;i<40;i++){
		dp[i]=dp[i-1]+dp[i-2];
	}
	
	while(cin >>n)cout<<dp[n]<<'\n';
}

