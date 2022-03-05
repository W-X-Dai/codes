#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll n,m,q,count=0;

    cin >>n>>m>>q;
    for(int i=0;i<q;++i){
        ll a1,a2,b1,b2,x,y;
        cin >>a1>>a2>>x>>y>>b1>>b2;
        if(a1==x && a2==y)count++;
        else if(a1==b1 && b1==x)count++;
        else if(a2==b2 && b2==y)count++;
        else if(a1==b1 && b2==y)count++;
        else if(a2==b2 && b1==x)count++;
    }
    cout<<count<<'\n';


}