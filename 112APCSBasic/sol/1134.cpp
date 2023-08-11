#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t=1;

    cin >>n;
    while(n!=1){
        if(n & 1)n=3*n+1;
        else n=n/2;
        ++t;
    }

    cout<<t<<'\n';
}