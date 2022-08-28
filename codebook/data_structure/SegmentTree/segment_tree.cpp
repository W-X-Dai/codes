#include<bits/stdc++.h>
using namespace std;

const int N=1e+5;
int arr[N],seg[4*N];

inline void slow(){
    for(int i=0;i<5e7;++i);
    return;
}

inline void build(int root,int l,int r){
//    cout<<root<<" "<<l<<" "<<r<<'\n';slow();
    if(l==r){seg[root]=arr[l];return;}
    int mid=(l+r)>>1;
    build(root<<1,l,mid);
    build(root<<1|1,mid+1,r);
    seg[root]=min(seg[root<<1],seg[root<<1|1]);
}

inline void modify(int root,int l,int r,int a,int b){
    cout<<root<<" "<<l<<" "<<r<<'\n';slow();
    seg[root]=min(seg[root],b);
    if(l==r)return;
    int mid=(l+r)>>1;
    if(a>mid)modify(root<<1|1,mid+1,r,a,b);
    else modify(root<<1,l,mid,a,b);
}

inline int query(int root,int l,int r,int sl,int sr){
    cout<<l<<" "<<r<<'\n';slow();
    if(sl==l && sr==r)return seg[root];
    if(l==r)return seg[l];
    int mid=(l+r)>>1;
    if(sr<=mid)return query(root<<1,l,mid,sl,sr);
    else if(sl>mid)return query(root<<1|1,mid+1,r,sl,sr);
    else {
        int rt=min(query(root<<1,l,mid,sl,mid)
              ,query(root<<1|1,mid+1,r,mid+1,sr));
        return rt;
    }
}

int main(){
    int n;
    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    build(1,1,n);
    modify(1,1,n,1,5);
//    for(int i=1;i<=(n<<2);++i)cout<<i<<" "<<seg[i]<<'\n';
    cout<<query(1,1,n,1,2)<<'\n';
}

/*
8
1 2 3 4 5 6 7 8

5
2 3 5 1 4
*/