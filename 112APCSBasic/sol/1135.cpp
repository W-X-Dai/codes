#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int n,x=1;
    
    cin >>n;
    for(int i=2;i<=n;++i)x*=i,x%=998244353;
    cout<<x<<'\n';
}