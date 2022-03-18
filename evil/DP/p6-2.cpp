#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll dp[100005];
ll p[100005],n,i;

int main(){
	cin >>n;
	for(i=1;i<=n;i++){
		cin >>p[i];
	}
	dp[1]=p[1],dp[2]=max(p[1], p[2]);
	for(i=3;i<=n;i++){
		dp[i]=max(dp[i-1],dp[i-2]+p[i]); 
	}
	cout<<dp[n];
}

