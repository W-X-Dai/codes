#include<bits/stdc++.h>
using namespace std;

int dp[100005],arr[100005],n,x,mxn=-1;

inline void sol(int num){
    cout<<num<<'\n';
    string m1=to_string(num)+".in",m2=to_string(num)+".out";

    ofstream f2(m2,ios::trunc);
    ifstream f1(m1,ios::in);

    f1 >>n;
    for(int i=0;i<n;++i)f1 >>arr[i];

    dp[0]=arr[0],dp[1]=max(arr[0],arr[1]);
    for(int i=2;i<n;++i){
        dp[i]=max(arr[i]+dp[i-2],dp[i-1]);
    }
    f2<<dp[n-1]<<'\n';    
}


int main(){
    for(int i=1;i<=10;++i)sol(i);
}
