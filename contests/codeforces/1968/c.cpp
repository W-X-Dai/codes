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
	for(int i=0;i<n-1;++i)cin >>arr[i];
}

inline void sol(){
	int ans[505]={0},add=0;
    ans[0]=600;
    for(int i=1;i<n;++i){
        if(arr[i-1]<arr[i-2]);
        ans[i]=ans[i-1]+arr[i-1];
    }
    for(int i=1;i<n;++i){
        if(ans[i-1]+add<((ans[i]+add)>>1)){
            add+=(ans[i]-ans[i-1]>>1)+1;
        }
    }
    for(int i=0;i<n;++i){
        cout<<ans[i]+add<<" \n"[i==n-1];
    }
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
