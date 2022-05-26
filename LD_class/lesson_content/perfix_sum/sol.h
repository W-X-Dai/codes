#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,l,r,pre[100005];

inline void sol(){
    cin >>n>>m;

    cin >>pre[1];
    for(int i=2;i<=n;++i){
        cin >>pre[i];
        pre[i]+=pre[i-1];
    }

    for(int i=0;i<m;++i){
        cin >>l>>r;
        cout<<pre[r]-pre[l-1]<<" ";
    }
    cout<<'\n';
}


/*
1 4 2 8 5 7
1 5 7 15 20 27


*/