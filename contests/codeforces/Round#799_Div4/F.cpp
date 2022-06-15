#include<bits/stdc++.h>
using namespace std;

const int N=55;

inline void sol(){
    int arr[30]={0},n,x;
    
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;x%=10;
        ++arr[x];
    }
    
    for(int i=0;i<=9;++i){
        if(arr[i]<1)continue;
        --arr[i];
        for(int j=i;j<=9;++j){
            if(arr[j]<1)continue;
            --arr[j];
            if(3-i-j>0)if(arr[3-i-j]>0){cout<<"YES\n";return;}
            if(13-i-j>0)if(arr[13-i-j]>0){cout<<"YES\n";return;}
            if(23-i-j>0)if(arr[23-i-j]>0){cout<<"YES\n";return;}
            ++arr[j];
        }
        ++arr[i];
    }
    cout<<"NO\n";
}   

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
