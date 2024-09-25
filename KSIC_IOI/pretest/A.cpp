//cf 1985D
#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,m;


inline void sol(){
	int cntx[N]{0},cnty[N]{0},mx{-1};
	cin >>n>>m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			char x;cin >>x;
			if(x=='#')++cntx[i],++cnty[j],mx=max(mx,cntx[i]);
		}
	}
	for(int i=1;i<=n;++i)if(cntx[i]==mx)cout<<i<<" ";
	for(int i=1;i<=m;++i)if(cnty[i]==mx)cout<<i<<'\n';
	
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    sol();
    return 0;
}
