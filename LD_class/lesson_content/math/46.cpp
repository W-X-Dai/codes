#include<bits/stdc++.h>
using namespace std;

inline void sol(){
    int x1,x2,y1,y2,x,y;

    while(cin >>x1>>y1>>x2>>y2){
        x=abs(x1-x2);
        y=abs(y1-y2);
        cout<<max(0,__gcd(x,y)-1)<<'\n';
    }
    
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    sol();
}