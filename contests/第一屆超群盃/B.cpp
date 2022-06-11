#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=1e+5;

int main(){
    string s;
    cin >>s;
    for(auto i:s){
        if(i=='A')cout<<"U";
        if(i=='T')cout<<"A";
        if(i=='C')cout<<"G";
        if(i=='G')cout<<"C";
    }
    cout<<'\n';
}
