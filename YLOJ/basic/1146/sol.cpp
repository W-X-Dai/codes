#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[10]={13,41,23,70,100,200,0,23,1,28};
    int n,x;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;cout<<arr[x-1]<<'\n';
    }
    return 0;
}