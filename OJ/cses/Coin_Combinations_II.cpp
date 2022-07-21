#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int arr[1000005],dp[1000005];
int n,x;


int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>x;
    for(int i=0;i<n;++i)cin >>arr[i];dp[0]=1;

    for(int i=1;i<=x;++i){
        int d=x;
        for(int j=0;arr[j]<d;--j){
            if(i>=arr[j]){
                dp[i]+=dp[i-arr[j]];
                d=i-arr[j];
            }
        }
    }
    for(int i=0;i<=9;++i)cout<<i<<" ";cout<<'\n';
    for(int i=0;i<=9;++i)cout<<dp[i]<<" ";cout<<'\n';
    cout<<dp[x]<<'\n';
}