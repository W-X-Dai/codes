#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;

    while(cin >>n){

        if((n%4==0 && n%100!=0) || n%400==0)x=1;
        else x=0;
        cout<<x<<'\n';
    //    if(x)cout<<"閏年\n";
    //    else cout<<"平年\n";
    }
}