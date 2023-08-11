#include<bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    cin >>m>>n;
    for(int i=0;i<2*n+1;++i)cout<<"-";
    for(int i=0;i<m;++i){
        cout<<"\n|";
        for(int j=0;j<n;++j)cout<<"#|";
        cout<<'\n';
        for(int j=0;j<2*n+1;++j)cout<<"-";
    }
    cout<<'\n';
    return 0;
}   