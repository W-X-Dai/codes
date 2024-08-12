#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair
#define inf 0x3f3f3f3f

using namespace std;

const int N=2e5+5;

int n,a[N],b[N];
pii arr[N];

inline void init(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>a[i];
    for(int i=0;i<n;++i)cin >>b[i];
    for(int i=0;i<n;++i)arr[i].ff=a[i]+b[i]-2,arr[i].ss=i;
}

inline void sol(){
    int ans=0,po=1;
    sort(arr,arr+n,[](pii a,pii b){
        return a.ff>b.ff;
    });
    for(int i=0;i<n;++i){
        if(po){
            ans+=a[arr[i].ss]-1;
            po=0;
        }else{
            ans-=b[arr[i].ss]-1;
            po=1;
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
