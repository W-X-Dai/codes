#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t,cnt=0;cin >>t;
    while(t--){
        int a,b,c;cin >>a>>b>>c;
        cnt+=(a+b+c>1);
    }
    cout<<cnt<<'\n';
    return 0;
}