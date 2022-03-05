#include<bits/stdc++.h>
#define N 200005
#define ll long long
using namespace std;

ll w[N]={0},t[N];

int main(){
    ll n,m,ans=0;
    int a,b,c;

    cin >>n>>m;
    for(int i=1;i<=m;++i){
        cin >>a>>b>>c;
        for(int j=a;j<=b;++j)w[j]+=c;
    }
    for(int i=1;i<=n;++i)cin >>t[i];
    
    sort(w+1,w+n+1);
    sort(t+1,t+n+1);


    for(int i=1;i<=n;++i){
        ans+=w[i]*t[n+1-i];
    }
    cout<<ans<<'\n';
}