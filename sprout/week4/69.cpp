#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

inline int divi(int a,int b){
    if(!b)return inf;
    return a%b ? a/b+1 : a/b;
}

int y[1005],t[1005],e[1005],d[1005];

void sol(){
    int n,k,mini=-1,tmp=0;
    
    cin >>n>>k;
    for(int i=0;i<n;++i)cin >>y[i]>>t[i];
    for(int i=0;i<n;++i)cin >>e[i];

    sort(y,y+n);
    sort(e,e+n,[](int x,int y){
        return x>y;
    });

    for(int i=0;i<n;++i){
        if(y[i]<e[i])d[i]=divi(e[i]-y[i],t[i]),++tmp;
    }
    if(n-tmp>=k){cout<<0<<'\n';return;}
    sort(d,d+tmp);
    if(d[k-n+tmp-1]==inf)cout<<"-1\n";
    else cout<<d[k-n+tmp-1]<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}




