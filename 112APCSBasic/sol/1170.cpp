#include<bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=1;i<=a/2;i++){
        for(int j=1;j<=a;j++){
            if(i+j==1+a/2)cout<<'/';
            else if(j-i==a/2){cout<<"\\\n";break;}
            else cout<<' ';
        }
    }
    for(int i=a/2+1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(j-i==-a/2)cout<<"\\";
            else if(j+i==1+a+a/2){cout<<"/\n";break;}
            else cout<<' ';
        }
    }
}