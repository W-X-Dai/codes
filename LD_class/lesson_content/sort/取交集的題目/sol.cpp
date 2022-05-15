#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll l,r,tl,tr,n;

void sol(){
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>tl>>tr;
        l=max(l,tl);
        r=max(r,tr);
    }
    if(l>r)cout<<"-1\n";
    else cout<<r-l<<'\n';
    
}

int main(){
    int t;
    cin >>t;
    while(t--)sol();
}