#include<bits/stdc++.h>
#pragma GCC optimize ("O3,unroll-loops")
#define int long long
using namespace std;

int h[200005],v[200005];
int n,dp[200005][2];


signed main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    for(int i=0;i<n;++i)cin >>h[i]>>v[i];
    for(int i=0;i<n;++i){
        dp[i][1]=v[i];
        dp[i][0]=v[i];
    }
    
    for(int i=0;i<n;++i){
        for(int j=0;j<i;++j){
            if(h[j]>h[i])dp[i][0]=max<long long>(dp[i][0],v[i]+dp[j][1]);
            if(h[j]<h[i])dp[i][1]=max<long long>(dp[i][1],v[i]+dp[j][0]);
        }
    }

    int mx=0;
    for(int i=0;i<n;++i){
        mx=max<long long>({dp[i][0],dp[i][1],mx,0});
    }
    cout<<mx<<'\n';
}