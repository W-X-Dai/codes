#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;

int n,t;
int seg[N<<2],arr[N];

inline void pull(int root){
    seg[root]=min(seg[root<<1],seg[root<<1|1]);
}

inline void build(int root,int l,int r){
//    cout<<root<<" "<<l<<" "<<r<<'\n';
    if(!(l-r)){
        seg[root]=arr[l];
        return;
    }
    int mid=(l+r)>>1;
    build(root<<1,l,mid);
    build(root<<1|1,mid+1,r);
    pull(root);
}

//modify a->b
inline void modify(int root,int l,int r,int a,int b){
//    cout<<root<<" "<<l<<" "<<r<<'\n';
    if(!(l-r)){
        seg[l]=b;
        cout<<l<<":"<<seg[l]<<'\n';
        return;
    }
    int mid=(l+r)>>1;
    if(a>mid)modify(root<<1|1,mid+1,r,a,b);
    else modify(root<<1|1,l,mid,a,b);
    pull(root);
}

//ql min/max{ql....qr}
inline int query(int root,int l,int r,int ql,int qr){
    if(ql<=l && qr>=r)return seg[root];
    int mid=(l+r)>>1;
    if(ql>mid)return query(root<<1|1,mid+1,r,ql,qr);
    else if(qr<=mid)return query(root<<1,l,mid,ql,qr);
    else {
        int rt=min(query(root<<1,l,mid,ql,mid),query(root<<1|1,mid+1,r,mid+1,qr));
        return rt;
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>t>>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    build(1,1,n);

//    for(int i=1;seg[i];++i)cout<<seg[i]<<'\n';
    for(int i=0;i<t;++i){
        int mode,a,b;
        cin >>mode>>a>>b;
        if(mode==1)cout<<query(1,1,n,a,b)<<'\n';
        if(mode==2)modify(1,1,n,a,b);
    }
    cout<<'\n';
    for(int i=1;seg[i];++i)cout<<i<<" "<<seg[i]<<'\n';
}

/*
8 8
1 2 3 4 5 6 7 8
1 1 4
1 2 6
2 1 10
1 1 8
1 2 6
2 3 5
1 2 7
1 1 8
*/