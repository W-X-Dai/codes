#include<bits/stdc++.h>
using namespace std;

const int N=1e+5;

struct node{
    int l,r;
    int data;
};

int arr[N];
node seg[N*2];

inline void build(int root,int l,int r){
    seg[root].l=l,seg[root].r=r;
    if(l==r)seg[root].data=arr[l];
    else{
        int t=(l+r)>>1;
        build(root<<1,l,t);
        build(root<<1+1,t+1,r);
        seg[root]=max(seg[root<<1],seg[root<<1+1]);
    }

}

inline void modify(int root,int a,int b){
    
}

int main(){


}