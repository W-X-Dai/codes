#include<bits/stdc++.h>
using namespace std;

int seg[10000],arr[10000];
int n;

inline int lg(int n){
    int x=1,i=0;
    while(n>x){
        x=x<<1,++i;
        if(n==x)return i;
    }
    return i-1;
}

void build(){
    cout<<lg(n)<<'\n';
    int tmp=n-(1<<lg(n));
    for(int i=1;i<=n;++i){
        if(i<=tmp*2)seg[(1<<(lg(n)+1))+i-1]=arr[i];
        else seg[(1<<lg(n))+i-2]=arr[i];
    //    if(i<=tmp*2)cout<<"a>"<<((1<<(lg(n)+1))+i-1)<<" ";
    //    else cout<<"b>"<<((1<<lg(n))+i-2)<<" ";
    }
}

int update(int n){
    if(seg[n]==0)seg[n]=max(update(n*2),update(n*2+1));
    return seg[n];
}

int main(){
    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    build();
    update(1);
    for(int i=1;i<=20;++i)cout<<seg[i]<<" ";
}