#include<iostream>
#include<cstring>

using namespace std;

inline void sol(){
    int h=0;
    string s;
    cin >>s;
    while(s.size()!=1){
        if(s[h]==s[h+1])s+="w";
        else s+="b";
        h+=2;
    }
    cout<<s[h]<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}