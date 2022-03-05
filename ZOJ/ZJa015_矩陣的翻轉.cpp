#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[105][105];
    int r,c;

    while(cin >>r>>c){
        for(int i=0;i<r;++i)
        for(int j=0;j<c;++j)cin >>arr[i][j];
        for(int j=0;j<c;++j){
            for(int i=0;i<r;++i)cout<<arr[i][j]<<" ";
        cout<<'\n';
        }
        
    }
}
