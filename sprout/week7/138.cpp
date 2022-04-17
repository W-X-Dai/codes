#include<bits/stdc++.h>
#define ll long long
#define mod 1000007 

using namespace std;

int dp[100005],n,x;

inline void init(){
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    init();
    
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;
        if(x & 1)cout<<0<<'\n';
        else cout<<dp[x]<<'\n';
    }
}