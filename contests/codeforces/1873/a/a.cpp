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
    n=0;
	string s;
    cin >>s;

    if(s[0]=='a')++n;
    if(s[1]=='b')++n;
    if(s[2]=='c')++n;
    if(n)cout<<"YES\n";
    else cout<<"NO\n";
    
}

inline void sol(){
	
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
