#include<bits/stdc++.h>
using namespace std;

int a[100005],b[100005],c[100005],dp[100005][3],n;

inline void sol(int num){
    cout<<num<<'\n';
    string m1=to_string(num)+".in",m2=to_string(num)+".out";

    ofstream f2(m2,ios::trunc);
    ifstream f1(m1,ios::in);

    f1 >>n;
    for(int i=1;i<=n;++i)f1 >>a[i];
    for(int i=1;i<=n;++i)f1 >>b[i];
    for(int i=1;i<=n;++i)f1 >>c[i];

    for(int i=1;i<=n;++i){
        dp[i][0]=min(dp[i-1][1],dp[i-1][2])+a[i];
        dp[i][1]=min(dp[i-1][0],dp[i-1][2])+b[i];
        dp[i][2]=min(dp[i-1][1],dp[i-1][0])+c[i];
    }
    f2<<min({dp[n][0],dp[n][1],dp[n][2]})<<'\n';
}


int main(){
    for(int i=1;i<=10;++i)sol(i);
}
