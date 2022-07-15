#include<bits/stdc++.h>
using namespace std;

int ispri[5005],n;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    fill(ispri+2,ispri+5005,1);

    cin >>n;
    for(int i=2;i<=n;++i){
        if(ispri[i])
        for(int j=i+i;j<=n;j+=i){
            ispri[j]=0;
        }
    }
    int op=!ispri[n];

    for(int i=n;i>0;--i){
        if(ispri[i] ^ op)cout<<i<<" ";
    }
    cout<<'\n';
    
}