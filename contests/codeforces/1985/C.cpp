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
	int ans=0,mx=-1,sum=0;
    for(int i=0;i<n;++i){
        sum+=arr[i];
        if(arr[i]>mx)mx=arr[i];
    //    cout<<(sum-mx)<<" "<<mx<<" "; 
        if((sum-mx)==mx)++ans;
    //    cout<<i<<" "<<sum<<" "<<mx<<'\n';
    }
    cout<<ans<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}