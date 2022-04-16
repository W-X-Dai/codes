#include <bits/stdc++.h>
#define pii pair<int,int>
#define ll long long
#define ff first
#define ss second

using namespace std;

int n;
pii p[200005];

ll dis(pii a,pii b){
    ll x=a.ff-b.ff,y=a.ss-b.ss;
    return x*x+y*y;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    ll d=0x3f3f3f3f3f3f3f3f;

    cin >>n;
    for(int i=0;i<n;++i)cin>>p[i].ff>>p[i].ss;

    sort(p,p+n);
    
    for(int i=0;i<n;++i){
        for(int j=0;j<i;j+=n-1){
            if(p[j].ff>p[i].ff+d)break;
            d=min(d,dis(p[i],p[j]));
        }
    }
    cout<<d<<endl;
   
}