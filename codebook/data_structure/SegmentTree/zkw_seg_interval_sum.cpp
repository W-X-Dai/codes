//interval sum
#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int n,N,seg[5000005];

inline void build(){
    for(int i=N+n;i<(N<<1);++i)seg[i]=0;
    for(int i=N-1;i>0;--i){
        seg[i]=seg[i<<1]+seg[i<<1|1];
    }    
}

inline void modify(int a,int b){
    seg[a+N-1]=b;
    for(int i=(N+a-1)>>1;i>0;i>>=1)
        seg[i]=seg[i<<1]+seg[i<<1|1];
}

inline int query(int l,int r){
    int ans=0;

    for(l+=N-1,r+=N-1;;l>>=1,r>>=1){
    //    cout<<l<<" "<<r<<'\n';
        if(l & 1)ans+=seg[l],++l;
        if(~r & 1)ans+=seg[r],--r;
//        if(!r^l^1)break;
        if(l==r){
            ans+=seg[r];
            return ans;
        }
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;
    cin >>t>>n;
    
    N=1;
    while(N<n)N<<=1;
    for(int i=N;i<N+n;++i)cin >>seg[i];
    build();

/*
    for(int i=1;i<(N<<1);++i){
        cout<<i<<" "<<seg[i]<<'\n';
    }
*/

    for(int i=0;i<t;++i){
        int mode,a,b;
        cin >>mode>>a>>b;
        if(mode==1)cout<<query(a+1,b+1)<<'\n';
        if(mode==2)modify(a+1,b);
    }

}
/*
8 8
1 2 3 4 5 6 7 8
1 1 4
1 2 6
2 0 10
1 0 7
1 2 6
2 3 5
1 2 7
1 0 7

6 5
2 3 5 1 4
1 0 1
1 2 4
2 0 5
2 2 2 
1 0 1
1 2 4
*/