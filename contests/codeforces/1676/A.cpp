#include<bits/stdc++.h>
#define ll long long

using namespace std;

const int N=1e5+5;

inline void sol(){
    string s;
    cin >>s;
    int a=0,b=0;
    for(int i=0;i<3;++i)a+=s[i]-'0';
    for(int i=3;i<6;++i)b+=s[i]-'0';

    if(a==b)cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
