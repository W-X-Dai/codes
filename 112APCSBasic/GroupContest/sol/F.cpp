#include<bits/stdc++.h>
using namespace std;

int main(){
    string a,b,tmp;
    int na,nb,suma=0,sumb=0,x;

    cin >>a>>na;
    for(int i=0;i<na;++i){
        cin >>tmp>>x;
        suma+=x;
    }

    cin >>b>>nb;
    for(int i=0;i<nb;++i){
        cin >>tmp>>x;
        sumb+=x;
    }

    if(suma==sumb)cout<<"Penalty shot\n";
    else if(suma>sumb){
        cout<<a<<" wins\n";
    }else cout<<b<<" wins\n";
}