#include<bits/stdc++.h>
using namespace std;
int main(){
    int book[105]={0},n,x;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;
        book[(x%1000)/10]++;
    }
    for(int i=0;i<100;++i){
        if(book[i]!=0){
            cout<<i<<" "<<book[i]<<'\n';
        }
    }
}