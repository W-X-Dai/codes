#include<bits/stdc++.h>
#define int long long
using namespace std;

int a,b,p,cnt=1;

signed main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>a>>b>>p;
    
    if(b==1){
        cout<<0<<'\n';
        return 0;
    }

    b%=p;
    for(int i=1;i<=p;++i){
        cnt*=a;
        cnt%=p;
        if(cnt==b){
            cout<<i<<'\n';
            return 0;

        }
    }

    return 0;
}