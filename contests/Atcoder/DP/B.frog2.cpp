#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int n,k,tmp,arr[100005],dp[100005];

int main(){
	cin >>n>>k;
	for(int i=1;i<=n;++i)cin >>arr[i],dp[i]=inf;

	dp[1]=0;dp[2]=abs(arr[1]-arr[2]);
	for(int i=1;i<=n;++i){
		for(int j=i;j<=min(i+k,n);++j){
		//	cout<<j<<" ";
			dp[j]=min(dp[j],dp[i]+abs(arr[i]-arr[j]));
		}
	//	cout<<'\n';
  }

//	for(int i=1;i<=n;++i)cout<<dp[i]<<" \n"[i==n];

	cout<<dp[n]<<'\n';

}