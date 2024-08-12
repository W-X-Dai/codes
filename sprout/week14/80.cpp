#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int n,q,N=1,seg[4000005];

void build(){
    for(int i=N-1;i>0;--i)seg[i]=min(seg[i<<1],seg[i<<1|1]);
}

void update(int a,int b){
    int id=a+N;
    seg[id]=b;id>>=1;
    while(id){
        seg[id]=min(seg[id<<1],seg[id<<1|1]);
        id>>=1;
    }
}

void query(int l,int r){
    int ans=inf;
    for(l+=N,r+=N;;l>>=1,r>>=1){
        ans=min({seg[l],seg[r],ans});
        if(l & 1)++l;
        if(~r & 1)--r;
        if(l>=r)break;
    }
    cout<<ans<<'\n';
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>q>>n;
    while(N<n)N<<=1;


    for(int i=N;i<N+n;++i)cin >>seg[i];
    for(int i=N+n;i<=(N<<1);++i)seg[i]=inf;
    build();
    
    while(q--){
        int m,l,r;
        cin >>m>>l>>r;
        if(m==1)query(l,r);
        else update(l,r);
    }
    return 0;
}

/*
6 5 
2 3 5 1 4
1 0 1
1 2 4
2 0 5
2 2 2
1 0 1
1 2 4
*/