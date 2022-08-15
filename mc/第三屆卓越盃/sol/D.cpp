#include<bits/stdc++.h>
#define int long long
using namespace std;

int dp[1005][1005],arr[1005][1005];
int mx[1005][1005],f,v,ans;

signed main(){
    ios::sync_with_stdio(0),cin.tie(0);
    
    cin >>f>>v;
    for(int i=1;i<=f;++i){
        for(int j=1;j<=v;++j){
            cin >>arr[i][j];
        }
    }

    memset(mx,-0x3f,sizeof(mx));
    for(int i=1;i<=f;++i){
        for(int j=i;j<=v;++j){
            dp[i][j]=mx[i-1][j-1]+arr[i][j];
            mx[i][j]=max({mx[i][j-1],dp[i][j]});
        }
    }

    cout<<mx[f][v]<<'\n';
}