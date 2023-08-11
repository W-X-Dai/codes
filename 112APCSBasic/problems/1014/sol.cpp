#include<bits/stdc++.h>
using namespace std;

long long n,q,l,r,p[100005];

int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    cin>>n>>q;
    cin>>p[1];
    for(int i=2;i<=n;++i){
        cin>>p[i];
        p[i]+=p[i-1];
    }
    
    for(int i=0;i<q;++i){
        cin>>l>>r;
        cout<<p[r]-p[l-1]<<" ";
    }
    cout<<"\n";
}
