#include<bits/stdc++.h>
using namespace std;

int n;

//t-th digit of array num and the value is x
void dfs(int t,int num[],int x){
    num[t]=x;
    if(x<n)dfs(t,num,x+1);
    else if(t<n){
        dfs(t+1,num,1);
    }
    if(t==n){
        for(int i=1;i<=n;++i)cout<<setw(5)<<num[i]<<" \n"[n==i];
    }

}


int main(){
    int num[10];
    cin >>n;
    dfs(1,num,1);

}