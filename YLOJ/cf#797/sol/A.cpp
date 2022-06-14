#include<bits/stdc++.h>
using namespace std;

inline void sol(){
    int n,x;cin >>n;x=n/3;
    if(n%3==1)cout<<x<<" "<<x+2<<" "<<x-1<<'\n';
    if(n%3==2)cout<<x+1<<" "<<x+2<<" "<<x-1<<'\n';
    if(n%3==0)cout<<x<<" "<<x+1<<" "<<x-1<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();

}
