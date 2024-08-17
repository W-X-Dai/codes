#include<bits/stdc++.h>
using namespace std;

inline void sol(){
    string s;
    cin >>s;
    if(s.size()>10){
        cout<<*s.begin()<<s.size()-2<<*s.rbegin()<<'\n';
    }else cout<<s<<'\n';
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}