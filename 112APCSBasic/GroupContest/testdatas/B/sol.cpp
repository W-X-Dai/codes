#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,sum=0;
    const long long mod=1000005;

    cin >>n;
    for(long long i=1;i*i<n;++i){
        if(i*i==n){
            sum+=i;
            sum%=mod;
        }else if(n%i==0){
            sum+=i+n/i;
            sum%=mod;
        }
    }
    n%=mod;
    cout<<(n*sum)%mod<<'\n';
    return 0;
}