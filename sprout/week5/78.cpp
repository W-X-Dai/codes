#include<bits/stdc++.h>
using namespace std;

inline void sol(){
    int a,b,c,d,e,f,cnt=0;
    cin >>a>>b>>c>>d>>e>>f;

    cnt+=f;
    cnt+=e;a=max(0,a-11*e);
    cnt+=d;
    
    if(b>5*d)b-=5*d;
    else{
        int tmp=5*d-b;
        a=max(0,a-tmp);
    }
    if(c%4==0)cnt+=c/4;
    else{
        int tmp=4-c%4;
        if(tmp==3){
            if(b>4){
                b-=4;
                
            }
        }
    }
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}