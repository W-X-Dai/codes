#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100005],n,x;
long double ave,sig;

int main(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i],ave+=arr[i];
    ave/=n;

    for(int i=0;i<n;++i){
        sig+=(arr[i]-ave)*(arr[i]-ave);
    }
    sig/=n;
    sig=sqrt(sig);
    cout<<(int)sig<<'\n';
}