#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;

inline void sol(){
    int a,x,cnt=0;
    cin >>a;
    for(int i=0;i<3;++i){
        cin >>x;
        if(x>a)++cnt;
    }
    cout<<cnt<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
