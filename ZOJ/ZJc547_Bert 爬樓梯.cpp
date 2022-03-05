#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll arr[10005];
    ll mod=1000000007;

    arr[0]=1,arr[1]=1;
    for(int i=2;i<10000;++i){
        arr[i]=(arr[i-1]+arr[i-2])%mod;
    }
    int n;
    while(cin >>n){
        cout<<arr[n]<<'\n';
    }
}