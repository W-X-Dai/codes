#include<bits/stdc++.h>
using namespace std;

const int inf=0x3f3f3f3f;

int n,q,N=1;
int seg[1000005];

inline void build(int lb,int rb,int i){
    if(lb==rb)return;
    
    int mid=lb+rb>>1;
    build(lb,mid,i<<1);
    build(mid+1,rb,i<<1|1);

    seg[i]=min(seg[i<<1],seg[i<<1|1]);
    return;
}

inline int query(int l,int r,int lb,int rb,int i){
    if(lb>=l && rb<=r)return seg[i];

    int mid=lb+rb>>1,rt=0x3f3f3f3f;
    if(l<=mid)rt=min(rt,query(l,r,lb,mid,i<<1));
    if(r>=mid+1)rt=min(rt,query(l,r,mid+1,rb,i<<1|1));

    return rt;
}

//k->x
inline void modify(int k,int x){
    int i=k+N-1;
    seg[i]=x;
    
    while(i>1){
        i>>=1;
        seg[i]=min(seg[i<<1],seg[i<<1|1]);
    }
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

//    freopen("test_input.txt","r",stdin);

    cin >>n>>q;
    while(n>N)N<<=1;
    

    for(int i=1;i<=n;++i)
        cin >>seg[N+i-1];

    for(int i=n+1;i<=N;++i)
        seg[i+N-1]=inf;

    build(1,N,1);
    for(int i=0;i<q;++i){
        int x,a,b;cin >>x>>a>>b;
        if(x==1)modify(a,b);
        if(x==2)cout<<query(a,b,1,N,1)<<'\n';
    }

    return 0;
}

/*
8 1
7 6 4 6 2 9 4 8
2 8 8
*/