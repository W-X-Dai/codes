#include<bits/stdc++.h>
using namespace std;

int dp[2005],arr[2005],n;

int main(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i],dp[i]=1;
    for(int i=0;i<n;++i){
        int mx=0;
        for(int j=0;j<i;++j){    
            if(arr[j]<arr[i])if(dp[j]>mx)mx=dp[j];
            dp[i]=mx+1;
        }
    }
    int mx=0;
    for(int i=0;i<n;++i)mx=max(dp[i],mx);
    cout<<mx<<'\n';
//    cout<<dp[n-1]<<'\n';

}