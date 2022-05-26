#include<bits/stdc++.h>
#include<algorithm>
using namespace std;

int n,arr[100005],dp[100005];

inline void init(){
    fill(arr,arr+n+5,0);
    fill(dp,dp+n+5,0);
}

inline void sol(int C){
    cout<<'\n';
    cout<<"Case "<<C<<":\n";
    init();

    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i];
    for(int i=0;i<n;++i){
        dp[i]=max(arr[i],dp[i-1]+arr[i]);
    }

    int mx=-100000,beg,end;
    for(int i=0;i<n;++i){
        if(dp[i]>mx){
            mx=dp[i];
            end=i;
        }
    }

    int cnt=0;
    for(int i=end;i>=0;--i){
        cnt+=arr[i];
        if(cnt==mx){
            beg=i;
        }
    }

    cout<<mx<<" "<<beg+1<<" "<<end+1<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    for(int i=1;i<=t;++i)sol(i);
}