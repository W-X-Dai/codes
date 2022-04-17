#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int x,r,v,n,a,b;


inline void sol(){
    cin >>n;
    for(int i=0;i<n;++i){
        cin >>a>>b;
        if(abs(a-x)<=r){
            if(b<=v)x=a;
            else {
                if(a>=x)x-=15;
                else x+=15;
            }
        }
    }
    cout<<x<<'\n';
}


int main(){
//    ios::sync_with_stdio(0),cin.tie(0);
    while(cin >>x>>r>>v)sol();
}
