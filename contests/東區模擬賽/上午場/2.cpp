#include<bits/stdc++.h>
#define N 10005
#define ll long long
#define WA ios::sync_with_stdio(0),cin.tie(0);
using namespace std;

int main(){
    WA
   ll p=0,n,arr[N],cost=0;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>arr[i];
    }
    p=arr[0];
    for(int i=1;i<n-1;++i){
        if(arr[i]>p){
            cost+=arr[i]-p;
        }else p=arr[i];
        cost++;
    } 
    cost+=arr[n-1];cost++;
    cout<<cost<<'\n';
}