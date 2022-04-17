#include<bits/stdc++.h>
using namespace std;

int main(){
    cout<<"Hi, Sigma isn't Omega.\n";
    cout.flush();

    string s;cin >>s;

    int l=s.size(),n;

    n=s[l-1]-'0';

    if(n & 1)cout<<"! 1\n";
    else cout<<"! 2\n";
    cout.flush();


}