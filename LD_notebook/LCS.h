#include<bits/stdc++.h>
using namespace std;
int dp[100][100];
inline int LCS(string s1,string s2){
	memset(dp,0,sizeof(dp));
	int l1=s1.size(),l2=s2.size();
	for(int i=1;i<=l1;++i){
		for(int j=1;j<=l2;++j){
			if(s1[i-1]==s2[j-1])dp[i][j]=dp[i-1][j-1]+1;
			if(s1[i-1]!=s2[j-1])dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
		//	cout<<dp[i][j]<<' ';
		}
	//	cout<<'\n';
	}
	return dp[l1][l2];
}
