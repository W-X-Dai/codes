#include<bits/stdc++.h>
#define ll long long
#define mod 998244353
#define N 200005
#define AC ios::sync_with_stdio(0),cin.tie(0);


using namespace std;
int main(){
    AC
    int n,arr[N],ans=0;
    
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>arr[i];
    }
    sort(arr,arr+n);

    for(int i=0;i<n/2;++i){
        ans+=arr[i];
    }


    cout<<ans<<'\n';

}