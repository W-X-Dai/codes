#include<bits/stdc++.h>
#define ll long long
using namespace std;
int dp[10000][10];
int main(){
	int n;
	for(int i=0;i<10;++i)dp[0][i]=0;
	for(int i=1;i<=10000;++i){
		for(int j=0;j<10;++j)dp[i][j]=dp[i-1][j];
		for(int num=i;num>0;num/=10)dp[i][num%10]+=1;
	}
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<9;++i){
			cout<<dp[n][i]<<' ';
		}cout<<dp[n][9]<<'\n';
	}
	return 0;
} 
