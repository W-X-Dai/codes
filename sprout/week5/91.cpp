#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll x,arr[10];

inline void sol(){
    for(int i=0;i<=9;++i)arr[i]=0;
    cin >>x;if(x==1){cout<<1<<'\n';return;}

    for(int i=9;i>=2;--i){
        while(x%i==0){
            x/=i;
            ++arr[i];
        }
    }
    if(x!=1){cout<<"-1"<<'\n';return;}
    for(int i=2;i<=9;++i){
        for(int j=0;j<arr[i];++j)cout<<i;
        arr[i]=0;
    }
    cout<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}