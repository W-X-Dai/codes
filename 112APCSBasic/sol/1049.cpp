#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;

    cin >>n;
    for(int i=0;i<n;++i){
        int a,b,c;
        cin >>a>>b>>c;
        if(b)sum+=4500/(a+b+c);
    }
    cout<<sum<<'\n';

}