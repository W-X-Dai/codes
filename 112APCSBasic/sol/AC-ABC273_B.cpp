#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int p(int x){
    int a=1;
    for(int i=0;i<x;++i)a*=10;
    return a;
}

int32_t main(){
    int x,k;

    cin >>x>>k;
    for(int i=1;i<=k;++i){
        int res=x%p(i);
        res/=p(i-1);
        x=x-x%p(i);
    //    cout<<res<<'\n';
        if(res>4)x+=p(i);
    }
    cout<<x<<'\n';
    
}