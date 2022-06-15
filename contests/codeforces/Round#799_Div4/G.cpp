#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;
int arr[N],pre[N];

inline void sol(){
    int n,k,cnt=0,combo=0;
    
    cin >>n>>k;cin >>arr[0];
    fill(pre,pre+n+5,0);
    for(int i=1;i<n;++i){
        cin >>arr[i];
        if(arr[i]*2>arr[i-1])pre[i]=1;
        else pre[i]=0;
    }

    for(int i=1;i<=n+1;++i){
        if(pre[i])++combo;
        else cnt+=max(0,combo-k+1),combo=0;
        cnt=max(0,cnt);
    }
    cout<<cnt<<'\n';
}   

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
