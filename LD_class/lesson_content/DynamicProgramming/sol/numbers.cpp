#include<iostream>
using namespace std;

int dp[100005],arr[100005],n,x,mxn=-1;

int main(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i];

    dp[0]=arr[0],dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;++i){
        dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
    }
    for(int i=0;i<n;++i){
        cout<<dp[i]<<" ";
    }
    
    cout<<'\n';
    cout<<dp[n-1]<<'\n';
}
