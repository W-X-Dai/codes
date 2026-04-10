#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5, mod=676767677;

int n, m, arr[N];

inline void init(){
	cin >>n>>m;
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
	int cnt[N]={0}, pre[N]={0}, ans=1;
    for(int i=0;i<n;++i){
        ++cnt[arr[i]];
    }
    for(int i=1;i<=m;++i){
        pre[i]=pre[i-1]+cnt[i-1];
    }
    
    for(int i=0;i<n;++i){
        int t=arr[i];
        if(!t)continue;

        int mn=(int)4e18;
        if(i-1>=0)mn=min(mn, arr[i-1]);
        if(i+1<n)mn=min(mn, arr[i+1]);

        if(mn>=t){
            cout<<0<<'\n';
            return;
        }

        int tmp;
        if(mn==t-1)tmp=pre[t];
        else tmp=cnt[t-1];

        ans=(ans*tmp)%mod;
    }


    cout<<ans<<'\n';
    return;
}

int32_t main() {
    // ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
