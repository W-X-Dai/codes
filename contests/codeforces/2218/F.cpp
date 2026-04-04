#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N], x, y;

inline void init(){
	cin >>x>>y;//x: even, y: odd
    n=x+y;
}

inline void sol(){
	if(y<x || y==0 || (x==0 && n%2==0)){
        cout<<"NO\n";
        return;
    }
    else cout<<"YES\n";

    vector<pii> v;
    if(x==0){
        for(int i=2;i<=n;++i)v.eb(m_p(1, i));
    }else{
        int t=2*x+(n%2);
        for(int i=2;i<=t;++i)v.eb(m_p(i-1, i));
        for(int i=t+1;i<=n;++i)v.eb(m_p(1, i));
    }
    for(auto [a, b]: v){
        cout<<a<<" "<<b<<'\n';
    }
}

int32_t main() {
    // ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
