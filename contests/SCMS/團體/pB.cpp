#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[500000],ans,n,q,k,l,r;
ll sum[500000];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    cin>>n>>q>>k;
    for(int i=1;i<=n;i++)cin>>arr[i];

    while(q--){
        ans=0;
        
        cin>>l>>r;
        ans+=(arr[l]-1)+(k-arr[r]);
        ans+=2*((arr[r]-arr[l]+1)-(r-l+1));
        cout<<ans<<'\n';
    }
    return 0;
}