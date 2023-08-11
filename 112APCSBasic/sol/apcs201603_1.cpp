#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,arr[105]={0};

    cin >>n;
    for(int i=0;i<n;++i){
        int x;cin >>x;
        ++arr[x];
    }

    int mx=101,mi=-1;
    for(int i=0;i<=100;++i){
        if(arr[i]){
            while(arr[i]--)cout<<i<<" ";
            if(i>59){
                mx=min(mx,i);
            }else{
                mi=max(mi,i);
            }
        }
    }
    cout<<'\n'<<(mi>59 || mi==-1 ? "best case" : to_string(mi))<<'\n';
    cout<<(mx<60 || mx==101 ? "worst case" : to_string(mx))<<'\n';

}