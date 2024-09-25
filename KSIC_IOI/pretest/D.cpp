//1741E

#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N],dp[N];

inline void init(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i],dp[i]=0;
}

inline void sol(){
    if(arr[0]<n)dp[arr[0]]=1;
	for(int i=0;i<n;++i){
    //    if(i-arr[i]<0 || i+arr[i]==n)continue;
        if(i==arr[i])dp[i]=1;
        
        if(i-arr[i]-1>=0)
        if(dp[i-arr[i]-1])dp[i]=1;//,cout<<i<<'\n';

        if(i+arr[i]<n)
        if(dp[i-1])dp[i+arr[i]]=1;
    }
//    for(int i=0;i<n;++i)cout<<dp[i]<<" \n"[i==n-1];
    cout<<(dp[n-1] ? "YES" : "NO")<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
