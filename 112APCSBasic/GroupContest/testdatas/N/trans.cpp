#include<bits/stdc++.h>
using namespace std;

int main(){
    ifstream fin("file");
    
    for(int i=1;i<=16;++i){
        string a,b,c,d;
        fin >>a>>b>>c>>d;
        ofstream f1("t"+to_string(i)+".in"),f2("t"+to_string(i)+".out");
        f1<<a<<'\n'<<b<<'\n'<<c<<'\n';
        f2<<d<<'\n';        
    }

}