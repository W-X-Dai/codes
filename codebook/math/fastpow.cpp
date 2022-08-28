#include<bits/stdc++.h>
#define ll long long

using namespace std;
const ll mod=1e9+7;

inline ll fastPow(ll a,ll b){
    ll res=1;
     while(b>0){
         if(b & 1)res=(res*a)%mod;
         a=(a*a)%mod;
         b>>=1;
     }
     return res;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll n,a,b;
    
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>a>>b;
        cout<<fastPow(a,b)%mod<<'\n';
    }
    return 0;
}