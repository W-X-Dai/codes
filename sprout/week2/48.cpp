#include<bits/stdc++.h>
#define pii pair<int,int>
#define l first
#define r second
#define inf 0x3f3f3f3f

using namespace std;

int n,root,pt,par[2005];
pair<int,int> v[2005];

inline void init(){
    for(int i=0;i<100000;++i){
        v[i].l=-1,v[i].r=-1;
    }
}

inline void insert(int x){
    if(x<pt){
        v[pt].l=x;
        pt=x;
        par[x]=pt;
    }else{
        int tmp=par[pt];
        while(x>tmp){pt=tmp,tmp=par[pt];}//return;}
        v[pt].r=x;
        par[x]=pt;
    }
    cout<<">>"<<pt<<'\n';
}

inline void show(int rt){
    if(v[rt].l==-1 && v[rt].r==-1){cout<<rt<<'\n';return;}
    show(v[rt].l);
    show(v[rt].r);
    cout<<rt<<'\n';
}

int main(){
//    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n>>root;pt=root;par[root]=inf;
    for(int i=1;i<n;++i){
        int x;
        cin >>x;
        insert(x);
    }
    
    show(root);

}
/*
test data

9
50 
30 
24 
5 
28 
45 
98 
52 
60 

*/
