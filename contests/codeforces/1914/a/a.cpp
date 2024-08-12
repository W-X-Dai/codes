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
string s;

inline void init(){
	cin >>n>>s;
}

inline void sol(){
	int letter[27]={0},ans=0;
    for(auto i:s)++letter[i-'A'+1];
    for(int i=1;i<=26;++i){
        if(letter[i]>=i)++ans;
    }
    cout<<ans<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
