#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,m;
string a,b;

inline void init(){
	cin >>n>>m>>a>>b;
}

inline void sol(){
	int ans=0,idx=0;
    for(int i=0;i<m;++i){
        char current=a[idx];
        if(b[i]==current){
            ++ans,++idx;
        }
    }
    cout<<ans<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
