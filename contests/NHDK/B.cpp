#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,k,t,ans;

    cin >>n>>k>>t;
    ans=k/n;
    k%=n;

//    cout<<t<<" "<<k<<'\n';
    if(!(ans & 1)) {
        if(t<=k){++ans;}//->
    }
    else if(ans & 1) if(t>=k)++ans;       //<-

    cout<<ans<<'\n';

}