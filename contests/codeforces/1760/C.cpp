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
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
	int mx=-1,mmx=-1,ans[N];
    for(int i=0;i<n;++i){
        if(arr[i]>=mx){
            mmx=mx,mx=arr[i];
        }else if(arr[i]>=mmx)mmx=arr[i];
    }
    for(int i=0;i<n;++i){
        if(arr[i]==mx)ans[i]=arr[i]-mmx;
        else ans[i]=arr[i]-mx;
    }
    for(int i=0;i<n;++i)cout<<ans[i]<<" \n"[i==n-1];
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
