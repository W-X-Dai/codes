#include<iostream>
using namespace std;
int main(){
    int n,arr[505][505]={0};
    
    cin >>n;
    for(int i=0,j=0;i<n;++i){
        for(int k=0;k<3;++k){
            if(j==n)j=0;
            arr[i][j]=1;
            ++j;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(arr[i][j]==0)cout<<".";
            else cout<<"#";
        }
        cout<<'\n';
    }
}