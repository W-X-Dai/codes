#include<bits/stdc++.h>
using namespace std;

int n;
string s;

inline void sol(){
    cin >>s;
    bool ok=1;
    if(s[0]!='y' && s[0]!='Y')ok=0;
    if(s[1]!='e' && s[1]!='E')ok=0;
    if(s[2]!='s' && s[2]!='S')ok=0;
    cout<<(ok?"YES":"NO")<<'\n';
}


int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    while(n--){
        sol();
    }
}
