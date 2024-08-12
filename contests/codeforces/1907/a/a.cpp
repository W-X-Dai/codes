#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

char a,b;
int n,arr[N];

inline void init(){
	cin >>a>>b;
}

inline void sol(){
	string s="abcdefgh";
    string num="12345678";
    for(int i=0;i<8;++i){
        if(s[i]!=a)cout<<s[i]<<b<<'\n';
    }
    for(int i=0;i<8;++i){
        if(num[i]!=b)cout<<a<<num[i]<<'\n';
    }
    return;
    
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
