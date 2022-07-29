#include<bits/stdc++.h>
using namespace std;

int n,cnt;

inline int maxdigit(){
    string s=to_string(n);
    int mx=0;
    for(auto i:s){
        mx=max(mx,i-'0');
    }
    return mx;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    while(n){
        n-=maxdigit();
        ++cnt;
    }
    cout<<cnt<<'\n';
}