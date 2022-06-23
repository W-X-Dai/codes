#include<bits/stdc++.h>
using namespace std;

int dp[1000005];
int w[105],v[105];

inline void sol(){
    memset(dp,0,sizeof(dp));

	int n,W;
	cin>>n>>W;
	
	for(int i=1;i<=n;++i)cin>>w[i]>>v[i];
	for(int i=1;i<=n;++i){
		for(int j=W;j>=w[i];--j){
			dp[j]=max(dp[j],dp[j-w[i]]+v[i]);
		}
	}
	
	cout<<dp[W]<<"\n";

}

int main(){
	ios::sync_with_stdio(0);cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}

/*
2
2 5
2 4
3 3
2 4
2 4
3 3
*/