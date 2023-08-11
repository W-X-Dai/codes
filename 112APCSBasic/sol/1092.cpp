#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d;

    cin >>a>>b>>c>>d;

    int x=a*d+b*c,y=b*d;
    cout<<x/__gcd(x,y)<<" "<<y/__gcd(x,y)<<'\n';
    return 0;

}