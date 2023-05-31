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
	int l1cnt[N]={0},r0cnt[N]={0},ans=0;
    
    l1cnt[0]=0,r0cnt[n-1]=0;
    for(int i=1;i<n;++i)l1cnt[i]=l1cnt[i-1]+arr[i-1];
    for(int i=n-2;i>=0;--i)r0cnt[i]=r0cnt[i+1]+!arr[i+1];

    // for(int i=0;i<n;++i)cout<<l1cnt[i]<<" ";
    // cout<<'\n';

    int mv=0;
    for(int i=0;i<n;++i){
        ans+=l1cnt[i]*!arr[i];
        if(arr[i])mv=max(mv,l1cnt[i]-r0cnt[i]);
        else mv=max(mv,r0cnt[i]-l1cnt[i]);
    }

    cout<<ans+mv<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
