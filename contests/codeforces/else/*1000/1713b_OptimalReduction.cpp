#include<bits/stdc++.h>
using namespace std;

int n,arr[100005];

inline void sol(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i];

    int x=1;
    for(int i=1;i<n;++i){
        if(arr[i]<arr[i-1])if(x==1)x=-1;
        if((arr[i]-arr[i-1])*x<0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}