#include<bits/stdc++.h>
using namespace std;

inline void ans(){
    ifstream f1("t1.in");
    ofstream f2("t1.out",ios::trunc);

    int x1,x2,y1,y2,x,y;

    while(f1 >>x1>>y1>>x2>>y2){
        x=abs(x1-x2);
        y=abs(y1-y2);
        f2<<max(0,__gcd(x,y)-1)<<'\n';
    }
}

int main(){
    ans();
}