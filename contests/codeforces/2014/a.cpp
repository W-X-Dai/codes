#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,k,arr[N];

inline void init(){
  	cin >>n>>k;
}

inline void sol(){
	int rest=0,ans=0,x;
 	for(int i=0;i<n;++i){
		cin >>x;
		if(x>=k)rest+=x;
		if(x==0 and rest)++ans,--rest;
	}
	cout<<ans<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}