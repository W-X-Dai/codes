#include<bits/stdc++.h>
using namespace std;

int dp[2005],arr[2005],n;

inline void sol(int num){
    cout<<num<<'\n';
    string m1=to_string(num)+".in",m2=to_string(num)+".out";

    ofstream f2(m2,ios::trunc);
    ifstream f1(m1,ios::in);

    f1 >>n;
    for(int i=0;i<n;++i)f1 >>arr[i],dp[i]=1;
    for(int i=0;i<n;++i){
        int mx=0;
        for(int j=0;j<i;++j){    
            if(arr[j]<arr[i])if(dp[j]>mx)mx=dp[j];
            dp[i]=mx+1;
        }
    }
    int mx=0;
    for(int i=0;i<n;++i)mx=max(dp[i],mx);
    f2<<mx<<'\n';
}


int main(){
    for(int i=1;i<=10;++i)sol(i);
}
