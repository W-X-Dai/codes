#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int mod=1e9+7;

int n;
ll pre[1000005];

inline ll fastPow(ll a,ll b){
    ll res=1;
    while(b>0){
        if(b & 1)res=(res*a)%mod;
        a=(a*a)%mod;
        b>>=1;
    }
    return res;
}

inline void init(){
    pre[0]=1;
    for(int i=1;i<=1000000;++i)pre[i]=(pre[i-1]*i)%mod;
//    for(int i=1;i<=10;++i)cout<<pre[i]<<" ";
//    cout<<endl;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll a,b;
    
    cin >>n;init();
    for(int i=0;i<n;++i){
        cin >>a>>b;long long x=pre[a-b];a=pre[a],b=pre[b];
//        cout<<a<<" "<<b<<" "<<x<<endl;
        ll tmp=(a*fastPow(b,mod-2))%mod;
        tmp=(tmp*fastPow(x,mod-2))%mod;
        
        cout<<tmp<<'\n';
    }
    return 0;
}