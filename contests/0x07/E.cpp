#include<bits/stdc++.h>
#define int long long
using namespace std;

const int N=1e6+5;

int n,q,arr[N];
string s;

int32_t main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n>>q;
    for(int i=0;i<n;++i)cin >>arr[i];
    cin >>s;

    sort(arr,arr+n);

    int l=0,r=n-1,ans=0,a[N];
    for(int i=0;i<q;++i){        
        if(s[i]=='1')a[i]=arr[l],++l;
        if(s[i]=='2')a[i]=arr[r],--r;
    }
    for(int i=0;i<q;i+=10){
        ans=0;
        for(int j=i;j<min(i+10,q);++j){
            ans+=a[j];
        }
        cout<<ans<<" ";
    }
    cout<<'\n';
    return 0;

}