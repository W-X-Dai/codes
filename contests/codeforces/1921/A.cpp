#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N];

inline void init(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
	int x,t,a,b;
	cin >>x>>t;
	for(int i=0;i<3;++i){
		cin >>a>>b;
		if(a==x){
			cout<<(b-t)*(b-t)<<'\n';
		}
	}
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
