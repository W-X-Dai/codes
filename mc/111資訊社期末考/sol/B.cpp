#include<iostream>
#include<string>

using namespace std;
string s;

int main(){
    cin >>s;
    
    for(auto i:s){
        if(i=='A')cout<<"U";
        if(i=='T')cout<<"A";
        if(i=='C')cout<<"G";
        if(i=='G')cout<<"C";
    }
    cout<<'\n';
}