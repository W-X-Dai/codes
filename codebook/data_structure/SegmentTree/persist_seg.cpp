#include<bits/stdc++.h>
using namespace std;

const int N=1e6+5;

struct node{
    node *lch,*rch;
    int val;

    node(){
        lch=rch=nullptr;
        val=0;
    }

    inline void pull(){
        val=lch->val+rch->val;
    }
}seg[N];

inline void build(int l,int r,node *&p){
    p=new node();
    if(l==r)return;
    int mid=l+r>>1;
    build(l,mid,p->lch);
    build(mid+1,r,p->rch);
    p->pull();
}

inline void modify(int pos,int lb,int rb,node *pre,node *cur){
    cur=new node();

    if(lb==rb){
        cur->val=pre->val+1;
        return;
    }

    cur->lch=pre->lch;
    cur->rch=pre->rch;

    int mid=lb+rb>>1;
}

int main(){

}