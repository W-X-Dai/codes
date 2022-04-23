#include<bits/stdc++.h>
#define mod  1000007
#define ll long long
using namespace std;

ll n,x,dp[100005][3];
//0:R 1:G 2:B

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    dp[1][0]=1,dp[1][1]=1,dp[1][2]=1;

    for(int i=1;i<100001;++i){
        dp[i][0];
    }

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;
        cout<<(dp[x][0]%mod+dp[x][1]%mod+dp[x][2]%mod)%mod<<'\n';
    }
}