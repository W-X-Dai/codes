#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,k,ans,a[N],b[N];

inline void init(){
    ans=0;
	cin >>n>>k;
	for(int i=1;i<=n;++i)cin >>a[i],a[i]+=a[i-1];
    for(int i=1;i<=n;++i)cin >>b[i];
}

inline void sol(){
	int mx=-1;
    for(int i=1;i<=min(n,k);++i){
        int rest=k-i;if(rest<0)rest=0;
        if(b[i]>mx)mx=b[i];
        ans=max(ans,a[i]+mx*rest);
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
