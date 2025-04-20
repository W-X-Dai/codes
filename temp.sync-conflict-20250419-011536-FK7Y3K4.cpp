#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int n,arr[100005],dp[100005];

int main(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i],dp[i]=1;

	dp[0]=1;
	for(int i=1;i<n;++i){
		for(int j=0;j<i;++j){
			if(arr[j]<arr[i]){
				dp[i]=max(dp[i],dp[j]+1);
			}
		}
	}
	int ans=-1;
	for(int i=0;i<n;++i){
	//	cout<<dp[i]<<" \n"[i==n-1];
		if(dp[i]>ans)ans=dp[i];
	}
	cout<<ans<<'\n';
	

}