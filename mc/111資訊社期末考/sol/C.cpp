#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,ans;

    cin >>n>>ans;
    for(int i=1;i<n;++i){
        cin >>x;
        ans=__gcd(ans,x);
    }
    cout<<ans<<'\n';
}