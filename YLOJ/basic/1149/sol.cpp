#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,arr[1005];

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>arr[i];
    }
    cin >>m;

    int t=0;
    for(int i=0;i<n;++i)t+=!(arr[i]-m);

    if(t==0){
        cout<<10<<'\n';
    }else if(t%4==1){
        cout<<100<<'\n';
    }else if(t%4==2){
        cout<<10000<<'\n';
    }else if(t%4==3){
        cout<<100000000<<'\n';
    }else if(t%4==0){
        cout<<1000000<<'\n';
    };

    return 0;

}