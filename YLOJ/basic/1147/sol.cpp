#include<bits/stdc++.h>
using namespace std;

int main(){
    int id[10]={10997,234598,38267,33456,28001,23910,19937,21484,31415,31328};
    int arr[10]={13,41,23,70,100,200,0,23,1,28};
    int n,x,yes=0;

    cin >>n;
    for(int i=0;i<n;++i){
        yes=0;
        cin >>x;
        for(int j=0;j<10;++j){
            if(id[j]==x){
                cout<<arr[j]<<'\n';
                yes=1;
            }
        }
        if(!yes)cout<<"-1\n";
    }
    return 0;
}