#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,q,arr[10005],x;

    cin >>n>>q;
    for(int i=0;i<n;++i)cin >>arr[i];
    for(int i=0;i<q;++i){
        cin >>x;
        cout<<arr[x-1]<<'\n';
    }

    
    return 0;
}