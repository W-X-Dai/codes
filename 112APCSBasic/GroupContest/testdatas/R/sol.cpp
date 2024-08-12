#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin >>n;
    if(n==1)cout<<"1 2 3 4 5 6\n";
    else{
        double l=n,r=n*6;
        if((int)(l+r)/2==(l+r)/2)cout<<(l+r)/2<<'\n';
        else{
            cout<<(l+r)/2-0.5<<" "<<(l+r)/2+0.5<<'\n';
        }
    }
}