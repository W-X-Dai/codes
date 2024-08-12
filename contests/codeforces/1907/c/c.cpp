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
	int letter[26]={0};
    for(auto i:s)++letter[i-'a'];
    sort(letter,letter+26,[](int a,int b){
        return a>b;
    });
    int mx=letter[0];
    if(2*mx<=n){
        if(n%2==0)cout<<0<<'\n';
        else cout<<1<<'\n';
    }else cout<<2*mx-n<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
