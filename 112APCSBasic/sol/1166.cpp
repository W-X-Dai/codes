#include<bits/stdc++.h>
using namespace std;

const int mod=1e6+5;

long long binpow(long long a,long long b) {
  long long res = 1;
  while(b>0) {
    if (b & 1)res=(res*a)%mod;
    a*=a;
    b>>=1;
  }
  return res;
}


int main(){
    int a,b;
    cin >>a>>b;
    cout<<binpow(a,b)<<'\n';
    return 0;
}