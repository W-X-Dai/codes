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

int n,q,arr[N],seg[4*N];

inline void build(){

}

inline void init(){
  	cin >>n>>q;
  	for(int i=1;i<=n;++i)cin >>arr[i];
	for(int i=2;i<=n;++i)arr[i-1]=abs(arr[i]-arr[i-1]);
}

inline void sol(){
	
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}