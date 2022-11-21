#include<bits/stdc++.h>
using namespace std;


const int N=1e6+5;
int n,arr[N];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i];


    int x,t;
    x=2;

    if(n<3);

    for(int i=x;i<n;++i)cout<<arr[i]<<" ";
    for(int i=0;i<min(x,n);++i)cout<<arr[i]<<" \n"[i==x-1];
    return 0;
}