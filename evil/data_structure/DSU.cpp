#include<bits/stdc++.h>
using namespace std;

int dsu[200005],mod,i,j,x;

bool det(int a,int b){
    int n,o,t;
    
    o=a;n=a;t=0;
    while(dsu[n]!=n){
        if(dsu[n]==b)   return 1;
        if(t>0 && n==o) break;
        n=dsu[n];
        t++;
    }
    o=b;n=b;t=0;
    while(dsu[n]!=n){
        if(dsu[n]==a)   return 1;
        if(t>0 && n==o) break;
        n=dsu[n];
        t++;
    }
    return 0;

}

void con(int a,int b){
    int n=a;
    
    if(dsu[a]==a){
        dsu[a]=b;
        return;
    }

    if(det(a,b))return;

    while(dsu[n]!=n){
        n=dsu[n];
    }
    dsu[n]=b;

    return;
}

int main(){
    int m,n,a,b;
    cin >>m>>n;
    for(i=0;i<m;i++)dsu[i]=i;
    for(i=0;i<n;++i){
        cin >>mod>>a>>b;
        if(mod==1)cout<<det(a,b)<<'\n';
        if(mod==0)con(a,b);
    }
}