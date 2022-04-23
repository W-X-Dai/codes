#include<bits/stdc++.h>
using namespace std;

int n,m,k,l,r;
bool bst[1000005];
int money;

int main(){
    cin >>n>>m>>k;
    for(int i=0;i<m;++i){
        cin >>l>>r;
        for(int j=l;j<=r;++j)bst[j]=1;
    }
    
    int f,e;
    for(int i=0;i<=n;++i){
    //    if(bst[i]==0)cout<<i<<'\n';
        if(bst[i]==0){
            f=i;
            while(bst[i]==0 && i<=n){
                e=i;++i;
            }
            money=max((e-f+1)/2,money);
        }
    //    cout<<f<<" "<<e<<'\n';
        
    }
    for(int i=0;bst[i]!=0;++i){
        money=max(money,i);
    }
    for(int i=n;bst[i]!=0;--i){
        money=max(money,n-i+1);
    }
    cout<<money<<'\n';
}