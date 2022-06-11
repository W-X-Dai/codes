#include<bits/stdc++.h>
#define ll long long
using namespace std;

const int N=1e5+5;
int n,arr[N];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i];
    sort(arr,arr+n);
    
    ll ans=0;
    for(int i=0;i<n;++i){
        int cnt=min(arr[i],n-i);
        ans=max(ans,cnt);
    }
    cout<<ans<<'\n';
}
