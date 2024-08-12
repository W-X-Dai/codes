#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,l,mx=-1;

    cin >>l>>n;
    for(int i=0;i<n;++i){
        int x;cin >>x;
        mx=max({mx,abs(x-l),x});
    }
    cout<<mx<<'\n';
}