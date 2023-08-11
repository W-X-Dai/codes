#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    double sum=0,t=0;

    cin >>n;
    for(int i=0;i<n;++i){
        int a,b;
        cin >>a>>b;
        sum+=a;t+=b;
    }
    sum/=t;
    cout<<round(sum)<<'\n';
}