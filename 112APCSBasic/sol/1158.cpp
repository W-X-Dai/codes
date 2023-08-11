#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,cnt=0;

    cin >>a;
    cnt+=a%10,a/=10;
    cnt+=a%10,a/=10;
    cnt+=a%10,a/=10;
    cnt+=a%10,a/=10;
    cnt+=a%10,a/=10;
    cout<<cnt<<'\n';
}