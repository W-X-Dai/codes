#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,arr[500],cnt=0;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>arr[i]>>arr[i];
    }
    cin >>k;
    for(int i=0;i<n;++i){
        if(arr[i]>=k)++cnt;
    }
    cout<<cnt<<'\n';

}