#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,q,N=1,lzt;
int seg[1000005],lz[1000005];

inline void build(int lb,int rb,int i){
    if(lb==rb)return;

    int mid=lb+rb>>1;
    build(lb,mid,i<<1);
    build(mid+1,rb,i<<1|1);
    seg[i]=seg[i<<1]+seg[i<<1|1];
    return;
}

inline int query(int l,int r,int lb,int rb,int i){
    cout<<i<<" "<<lz[i]<<'\n';
    lzt+=lz[i];
    if(l<=lb && rb<=r)return seg[i];

    int mid=lb+rb>>1,rt=0;
    if(mid>=l)rt+=query(l,r,lb,mid,i<<1);//,lzt+=lz[i<<1];
    if(mid+1<=r)rt+=query(l,r,mid+1,rb,i<<1|1);//,lzt+=lz[i<<1|1];
    return rt;
}

//seg[k]->x
inline void modify(int k,int x){
    k=N+k-1;
    seg[k]=x;
    while(k>1){
        k>>=1;
        seg[k]=seg[k<<1]+seg[k<<1|1];
    }
    return;
}

inline void tag(int x,int l,int r,int lb,int rb,int i){
    if(l==r){
        modify(l,seg[l+N-1]+x);
        return;
    }
    if(lb>=l && rb<=r){
        lz[i]+=x;
        return;
    }
    int mid=lb+rb>>1;
    if(mid>=l)tag(x,l,r,lb,mid,i<<1);
    if(mid+1<=r)tag(x,l,r,mid+1,rb,i<<1|1);
    return;
}


signed main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>q;
    while(n>N)N<<=1;

    for(int i=1;i<=n;++i)
        cin >>seg[N+i-1];

    build(1,N,1);
    for(int i=0;i<q;++i){
        int x,a,b,c;
        cin >>x;
        if(x==1){
            cin >>a>>b>>c;
            tag(c,a,b,1,N,1);
        }
        if(x==2){
            cin >>a>>b;
            lzt=0;
            cout<<query(a,b,1,N,1)<<'\n';
            cout<<lzt<<'\n';
        }
    }
    for(int i=1;i<=N+N;++i)cout<<lz[i]<<" ";
    return 0;
}