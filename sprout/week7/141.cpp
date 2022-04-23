#include<bits/stdc++.h>
using namespace std;

int arr[100005],dp[100005],n;

inline void sol(){
    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    dp[1]=arr[1],dp[2]=max(arr[1],arr[2]);
    for(int i=3;i<=n;++i){
        dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
    }
    cout<<dp[n]<<'\n';;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}