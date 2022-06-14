#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N=1e5+5;

inline void sol(){
    int n,sum=0,mi=0x3f3f3f3f,arr[100];
    
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i],mi=min(mi,arr[i]);
    for(int i=0;i<n;++i)sum+=arr[i]-mi;
    cout<<sum<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
