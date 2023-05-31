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
string s,def="314159265358979323846264338327";

inline void init(){
	cin >>s;
}

inline void sol(){
    n=s.size();
    int cnt=0;

    for(int i=0;i<n;++i){
        if(s[i]==def[i])++cnt;
        else break;
    }
    cout<<cnt<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
