#include<bits/stdc++.h>
#define db double
#define MXN 1000000
using namespace std;

int n;//deg f(x) = n
int roots;
db arr[100];//Magnitude

db f(db x){
    db ans=0;
    for(int i=n;i>=0;i--)
        ans+=arr[i]*pow(x,i);
    return ans;
}

//Root Location Theorem
void RLT(db l,db r,db mg){
    cout<<1<<" "<<mg<<'\n';
    if(mg<0.00001){
        roots++;
        cout<<f(l)<<'\n';
        return;
    }
    for(db i=l;i<r;i+=mg){
    //    cout<<2<<":"<<f(i)*f(i+1)<<'\n';
        if(f(i)*f(i+1)<0){
            RLT(i,i+mg,mg/10);
        }
        if(f(i)==0)cout<<i<<" ";
        if(f(i+1)==0)cout<<i+1<<" ";
    }
}

int main(){
    
    cin >>n;
    for(int i=n;i>=0;i--)cin >>arr[i];
    while(roots<n)RLT(-5,5,1);
    cout<<'\n';
}