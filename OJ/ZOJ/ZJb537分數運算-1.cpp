#include<bits/stdc++.h>
#define ll long long
using namespace std;

double dp[10005];

int main(){
//	ios::sync_with_stdio(0),cin.tie(0);
	dp[1]=1;
	for(int i=2;i<10000;++i){
		if(i&1)dp[i]=1/dp[i-1];
		else dp[i]=1+dp[i/2];
	}
	double a,b;
	while(cin >>a>>b){
		double x=a/b;
		for(int i=1;i<10000;++i){
			if(abs(dp[i]-x)<0.000001){
				cout<<i<<'\n';
				break;
			}
		}
	}


}

