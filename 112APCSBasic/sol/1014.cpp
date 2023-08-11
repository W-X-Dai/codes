#include <bits/stdc++.h>
#define int long long
using namespace std;

int n,m,l,r,pre[100005];

inline void ans(int num){


    cin >>n>>m;
    cin >>pre[1];
    for(int i=2;i<=n;++i){
        cin >>pre[i];
        pre[i]+=pre[i-1];
    }
    cerr<<pre[5]<<'\n';
    for(int i=0;i<m;++i){
        cin >>l>>r;
        cout<<pre[r]-pre[l-1]<<" ";
    }
    cout<<'\n';
}

int32_t main(){
    ans(1);
}
