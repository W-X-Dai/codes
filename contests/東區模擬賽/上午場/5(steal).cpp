#include<bits/stdc++.h>
#define N 10005
#define ll long long
#define WA ios::sync_with_stdio(0),cin.tie(0);
using namespace std;


int main(){
    WA
    int arr[4][4],a=0,b=0;
    char x;
    
    for(int i=1;i<=3;++i){
        for(int j=1;j<=3;++j){
            cin >>x;
            if(x=='o')arr[i][j]=1;
            if(x=='x')arr[i][j]=0;
        }
    }
    
    for(int i=1;i<=3;++i){
        if(arr[i][1] == arr[i][2] && arr[i][2] == arr[i][3]){
            if(arr[i][1]==1)a=1;
            if(arr[i][1]==0)b=1;
        }
        if(arr[1][i] == arr[2][i]  && arr[2][i]== arr[3][i]){
            if(arr[1][i]==1)a=1;
            if(arr[1][i]==0)b=2;
        }
    }
    if(arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3]){
        if(arr[1][1]==1)a=1;
        if(arr[1][1]==0)b=1;
    }
    if(arr[3][1] == arr[2][2] && arr[2][2] == arr[1][3]){
        if(arr[2][2]==1)a=1;
        if(arr[2][2]==0)b=1;
    }
    
    cout<<a<<" "<<b<<" "<<1-(a+b)<<'\n';
    
}