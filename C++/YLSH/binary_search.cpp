#include<bits/stdc++.h>
using namespace std;

int arr[10]={1,2,3,4,5,6,7,8,9,10};
void bs(int l,int r,int x){
    if(l<r){
        cout<<"killed\n";
        return;
    }
    int mid=(l+r)/2;
    if(mid==x){
        cout<<"Yeea\n";
        return;
    }
    if(mid>x)
        bs(l,mid,x);
    else
        bs(mid+1,r,x);
}   

int main(){
    int x;
    cin >>x;
    bs(x);
}