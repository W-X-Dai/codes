#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    int n;cin >>n;
    
    if(n==1)cout<<"No\n";
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            cout<<"No "<<i<<'\n';
            return 0;
        }
    }
    cout<<"Yes "<<n<<'\n';
}