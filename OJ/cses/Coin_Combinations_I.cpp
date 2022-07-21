#include<bits/stdc++.h>
using namespace std;

const int mod=1e9+7;

int arr[1000005],dp[1000005];
int n,x;


int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>x;
    for(int i=0;i<n;++i)cin >>arr[i];
    sort(arr,arr+n);

    dp[0]=1;
    for(int i=0;i<=x;++i){
        for(int j=0;j<n;++j){
            if(i+arr[j]>x)continue;
            else{
                dp[i+arr[j]]+=dp[i];
                dp[i+arr[j]]%=mod;
            }
        }
    }
    cout<<dp[x]<<'\n';
}