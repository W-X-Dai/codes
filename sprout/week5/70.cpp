#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,x;

inline void sol(){
    ll cnt=0;
    priority_queue<ll> pq;

    cin >>n;
    for(int i=0;i<n;++i)cin >>x,pq.push(x*-1);
    
    ll a,b;
    while(pq.size()!=1){
        a=pq.top()*-1,pq.pop();
        b=pq.top()*-1,pq.pop();
        cnt+=(a+b),pq.push((a+b)*-1);
    }

    cout<<cnt<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--){
        sol();
    }
}