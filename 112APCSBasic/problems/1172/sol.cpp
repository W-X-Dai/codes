#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,arr[10]={0};

    cin >>n;
    for(int i=0;i<n;++i){
        int a;cin >>a;
        ++arr[a];
    }
    cin >>q;
    cout<<arr[q]<<'\n';

}