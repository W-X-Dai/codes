#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N],a,b;
char x;

string t,u;

inline void init(){
	a=0,b=0;
	cin >>n;
	cin >>t>>u;
}

inline void sol(){
	for(int i=0;i<n;++i){
		if(t[i]!=u[i]){
			a+=t[i]-'0';
			b+=u[i]-'0';
		}
	}
	
	cout<<min(a,b)+abs(a-b)<<'\n';
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
