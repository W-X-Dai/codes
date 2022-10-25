#include<bits/stdc++.h>
using namespace std;

//calculate a/b+c/d=x/y
int main(){
    int a,b,c,d,x,y;
    cin >>a>>b>>c>>d;

    y=b*d;
    x=a*d+b*c;

    int gcd=__gcd(x,y);
    x/=gcd,y/=gcd;

    cout<<x<<" "<<y<<'\n';

}