#include<bits/stdc++.h>
using namespace std;

inline void sol(){
    int n,a[1000],i;
    cin >>n;

    for(i=0;n>0;++i){
        a[i]=n%2;
        n/=2;
    }
    --i;
    for(;i>=0;--i){
        cout<<a[i];
    }
    cout<<'\n';
    
}

int main(){
    int t;cin >>t;
    while(t--)sol();
    return 0;
}