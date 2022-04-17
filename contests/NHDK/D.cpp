#include<bits/stdc++.h>
using namespace std;
 
const int N=200010;
 
int ind[N],oud[N];
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);
 
    int n,m;
    cin>>n>>m;
 
    for(int i=0;i<m;++i){
        int f,t;
        cin>>f>>t;
        ind[t]++;
        oud[f]++;
    }
 
    for(int i=1;i<=n;++i){
        cout<<oud[i]<<" ";
    }
    cout<<"\n";
 
    for(int i=1;i<=n;++i){
        cout<<ind[i]<<" ";
    }
    cout<<"\n";
 
    for(int i=1;i<=n;++i){
        cout<<ind[i]+oud[i]<<" ";
    }
    cout<<"\n";
}