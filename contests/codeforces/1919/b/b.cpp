#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n;

inline void init(){
	cin >>n;
}

inline void sol(){
	int ans,p=0,m=0;char x;
    while(n--){
        cin >>x;
        if(x=='+')++p;
        else ++m;
    }
    cout<<abs(p-m)<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
