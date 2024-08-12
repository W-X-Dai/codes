#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,f,a,b,arr[N];

inline void init(){
	cin >>n>>f>>a>>b;
	arr[0]=0;
	for(int i=1;i<=n;++i)cin >>arr[i];
}

inline void sol(){
	for(int i=1;i<=n;++i){
		f-=min(b,a*(arr[i]-arr[i-1]));
		
		if(f<=0){
			cout<<"NO\n";
			return;
		}
	}
	cout<<"YES\n";
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
