#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

string s;

int ans;

inline void init(){
    cin >>ans;
    cin >>s;ans=0;
}

inline void sol(){
    for(auto i:s){
        ans=max(ans,(int)i-(int)'a'+1);
    }
    cout<<ans<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
