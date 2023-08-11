#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;cin >>x;

    if(x==1){
        cout<<"No\n";
        return 0;
    }
    if(x==2){
        cout<<"Yes\n";
        return 0;
    }
    for(int i=2;i<x;++i){
        if(x%i==0){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}