#include<bits/stdc++.h>
#define int long long
using namespace std;

int N=1,n,q;
int seg[1000005];

inline void build(int id,int l,int r){
    if(l==r)return;

    int mid=l+r>>1;
    build(id<<1,l,mid);
    build(id<<1|1,mid+1,r);

    seg[id]=seg[id<<1]+seg[id<<1|1];
}

inline int query(int l,int r,int lb,int rb,int id){
//    cout<<lb<<" "<<rb<<'\n';
    if(lb>=l && rb<=r)return seg[id];

    int mid=lb+rb>>1,rt=0;
    if(l<=mid)rt+=query(l,r,lb,mid,id<<1);
    if(r>=mid+1)rt+=query(l,r,mid+1,rb,id<<1|1);
    return rt;
}

inline void modify(int x,int k){
    x=x+N-1;
    seg[x]=k;
    while(x>1){
        x>>=1;
        seg[x]=seg[x<<1]+seg[x<<1|1];
    }
}

signed main(){
    ios::sync_with_stdio(0),cin.tie(0);

//    freopen("test_input.txt","r",stdin);

    cin >>n>>q;
    while(N<n)N<<=1;
    for(int i=1;i<=n;++i)cin >>seg[N+i-1];
    
    build(1,1,N);
    for(int i=0;i<q;++i){
        int a,b,x;cin >>x>>a>>b;
        if(x==1)modify(a,b);
        if(x==2)cout<<query(a,b,1,N,1)<<'\n';
    }
    return 0;
}