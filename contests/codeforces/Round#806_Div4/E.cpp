#include<bits/stdc++.h>
using namespace std;


inline void sol(){
    int n,ans=0;int arr[105][105];
    cin >>n;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            char x;cin >>x;
            arr[i][j]=x-'0';
        }
    }

    int tmp=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            tmp=arr[i][j]+arr[j][n-1-i]+arr[n-1-i][n-1-j]+arr[n-1-j][i];
            arr[i][j]=0,arr[j][n-1-i]=0,arr[n-1-i][n-1-j]=0,arr[n-1-j][i]=0;
        //    cout<<i<<" "<<j<<" "<<tmp<<'\n';
            if(tmp==3 || tmp==1)++ans;
            if(tmp==2)ans+=2;
        }
    }
    cout<<ans<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}