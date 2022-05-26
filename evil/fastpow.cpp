#include<bits/stdc++.h>
#define mod 100000007
#define ll long long

using namespace std;

inline ll fastPow(int a,int b){
    ll res=1;
     while(b>0){
         if(b & 1)res=(res*a)%mod;
         a=(a*a)%mod;
         b>>=1;
     }
     return res;
}

int main(){
    int a,b;
    cin >>a>>b;
    cout<<fastPow(a,b);
}