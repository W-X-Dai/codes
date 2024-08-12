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
	cin >>n;
}

inline void sol(){
	// int maxsum=0,maxx=2;
    // for(int tempx=2;tempx<=n;++tempx){
    //     int tempsum=0;
    //     for(int i=tempx;i<=n;i+=tempx){
    //         tempsum+=i;
    //     }
    //     if(tempsum>maxsum){
    //         maxsum=tempsum;
    //         maxx=tempx;
    //     }
    // }
    // cout<<maxx<<'\n';
    if(n==3)cout<<3<<'\n';
    else cout<<2<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
