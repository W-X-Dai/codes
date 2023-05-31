#include<bits/stdc++.h>
#include"testlib.h"

using namespace std;;

int main(int argc, char* argv[]){
    registerGen(argc, argv, 1);

    int a[5],arr[5][6];
    for(int i=0;i<5;++i)a[i]=rnd.next(-10,10);

    for(int i=0;i<5;++i){
        long long sum=0;
        for(int j=0;j<5;++j){
            arr[i][j]=rnd.next(-1e5,1e5);
            sum+=arr[i][j]*a[j];
        }
        arr[i][5]=sum;
    }
    for(int i=0;i<5;++i){
        for(int j=0;j<6;++j){
            cout<<arr[i][j]<<" \n"[j==5];
        }
    }
    for(int i=0;i<5;++i)cout<<a[i]<<" ";cout<<'\n';
}