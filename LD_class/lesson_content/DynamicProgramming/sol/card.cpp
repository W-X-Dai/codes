#include<bits/stdc++.h>
using namespace std;

int a[10],b[10],dp[10][10];
int n,dif,vmin,tmin;

int main(){
    vmin=0x3f3f3f3f;
    cin >>n;
    for(int i=1;i<=n;++i){
        cin >>a[i]>>b[i];
        dif+=a[i]-b[i];
    }
    for(int i=1;i<=n;++i){
        dp[i][0]=dif;
    }
    dp[1][1]=dif-a[1]+b[1];
    for(int i=1;i<=n;++i){
        for(int j=1;j<i;++j){
            dp[i][j]=min(dp[i-1][j],dp[i-1][j-1]-a[i]+b[i]);
            if(abs(dp[i][j])<=vmin){
                if(abs(dp[i][j])<vmin)tmin=j;
                else if(j<tmin)tmin=j;
            }
        }
    }
    cout<<tmin<<'\n';
}