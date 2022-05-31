#include<bits/stdc++.h>
#define ll long long
using namespace std;

int p[31];

inline ll func(int x){
    if(!x)return 1;
    int sum=0;
    for(int i=0;i<x;++i){
        sum+=func(i);
    }
    return sum+p[x];
}


int main(){
    p[0]=1;
    for(int i=1;i<=31;++i){
        p[i]=p[i-1]*2;
    }
    for(int i=1;i<=31;++i){
        cout<<"x="<<i<<" "<<func(i)<<'\n';
    }
}