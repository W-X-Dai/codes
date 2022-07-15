#include<bits/stdc++.h>
using namespace std;

int n,wheel[105];
string s;

//k-th wheel,t times
inline void U(int k,int t){
    wheel[k]+=t;
    wheel[k]%=10;
}

inline void D(int k,int t){
    wheel[k]-=t;
    while(wheel[k]<0)wheel[k]+=10;
}

inline void sol(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>wheel[i];
    for(int i=0;i<n;++i){
        int k,u=0,d=0;cin >>k>>s;
        for(auto i:s){
            if(i=='U')++u;
            else ++d;
        }
        if(u>d)D(i,u-d);
        else U(i,d-u);
    }
    for(int i=0;i<n;++i)cout<<wheel[i]<<" \n"[i==n-1];
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while (t--){
        sol();
    }
    return 0;
}