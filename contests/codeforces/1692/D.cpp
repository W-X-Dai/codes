#include<bits/stdc++.h>
using namespace std;

const int N=55;

inline bool det(int a,int b){
    if(a%10==b/10 && a/10==b%10)return 1;
    return 0;
}

inline void sol(){
    int d,a,b,consta,constb,cnt=0;
    char x;
    
    cin >>a>>x>>b>>d;consta=a,constb=b;

    while(1){
        b+=d;a+=b/60,b%=60;
        a%=24;
        if(det(a,b))++cnt;
        if(a==consta && b==constb)break;
    }
    cout<<cnt<<'\n';
}   

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
