#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;

    cin >>a>>b>>c;

    if(b*b-4*a*c<0)cout<<"1\n";
    else if(b*b-4*a*c==0)cout<<"2\n";
    else cout<<"3\n";

    return 0;

}