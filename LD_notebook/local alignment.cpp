#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;
string s1,s2;
ll dp[1005][1005],ans=0;
int main(){
	cin>>s1>>s2;
	for(int i=1;i<=s1.size();++i){
		for(int j=1;j<=s2.size();++j){
			if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1]+8;
			else
				dp[i][j]=max({dp[i-1][j]-3,dp[i][j-1]-3,dp[i-1][j-1]-5});
			dp[i][j]=max((ll)0,dp[i][j]);
			ans=max(ans,dp[i][j]);
		}
	}
	cout<<ans<<'\n';
	return 0; 
}


