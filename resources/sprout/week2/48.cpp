#include<bits/stdc++.h>
#define pii pair<int,int>
#define l first
#define r second
#define inf 0x3f3f3f3f

using namespace std;

int n,root,pt,par[2005];
pair<int,int> v[2005];

inline void insert(int x){
    if(x<pt){
        v[pt].l=x;
    }
    if(x>pt){
        int tmp=par[pt];
        while(x>tmp)pt=tmp,tmp=par[pt];
    }
    v[pt].r=x;
}

int main(){
    cin >>n>>root;pt=root;par[root]=inf;
    for(int i=1;i<n;++i){
        int x;
        cin >>x;
        insert(x);
    }
}