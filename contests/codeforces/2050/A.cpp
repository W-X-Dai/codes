#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,m,arr[N];

inline void init(){
	string s;
  	cin >>n>>m;
  	for(int i=0;i<n;++i)cin >>s,arr[i]=s.size();
}

inline void sol(){
	int ans=0;
	for(int i=0;i<n;++i){
		if(arr[i]>m)break;
		++ans,m-=arr[i];
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