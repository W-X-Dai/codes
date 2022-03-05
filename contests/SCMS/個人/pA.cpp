#include<bits/stdc++.h>
using namespace std;
int main(){
    int h,m,n;
    char x;

    cin >>h>>x>>m>>n;

    m+=n;
    while(m>=60){
        m-=60;
        h+=1;
    }
    while(h>=24){
        h-=24;
    }
    if(h<10)cout<<"0"<<h<<":";
    else cout<<h<<":";
    if(m<10)cout<<"0"<<m<<'\n';
    else cout<<m<<'\n';

}