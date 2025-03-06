#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair
#define inf 0x3f3f3f3f

using namespace std;

const int N=2e5+5;

int na,nb;
string a,b,c;

inline void init(){
  	cin >>a>>b>>c;
	na=a.size(),nb=b.size();
}

inline void sol(){
	int dp[na+5][nb+5];
	
	for(int i=0;i<na+3;++i){
		for(int j=0;j<nb+3;++j)
			dp[i][j]=inf;
	}
	
	dp[0][0]=0;
	for(int i=0;i<na;++i){
		dp[i+1][0]=dp[i][0]+(c[i]!=a[i]);
	}
	for(int i=0;i<nb;++i){
		dp[0][i+1]=dp[0][i]+(c[i]!=b[i]);
	}
	for(int i=1;i<=na;++i){
		for(int j=1;j<=nb;++j){
			dp[i][j]=min(dp[i][j-1]+(b[j-1]!=c[i+j-1]),dp[i-1][j]+(a[i-1]!=c[i+j-1]));
		}
	}
	cout<<dp[na][nb]<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}