#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
    int arr[5000];
    arr[1]=1,arr[2]=1;
    
    for(int i=3;i<500;++i){
        arr[i]=(arr[i-1]+arr[i-2])%100;
    }
    arr[0]=arr[300];
    int n;cin >>n;
    cout<<arr[n%300]<<'\n';
}