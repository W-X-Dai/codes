#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int x;cin >>x;
    if(x==2){
		cout<<"Yes\n";
        return 0;
    }
    for(int i=2;i*i<=x;++i){
        if(x%i==0){
            cout<<"No\n";
            return 0;
        }
    }
    cout<<"Yes\n";
    return 0;
}