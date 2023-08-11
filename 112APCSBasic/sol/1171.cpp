#include<bits/stdc++.h>
#define int long long
using namespace std;

inline int f(int n){
    int t=1;
    for(int i=1;i<=n;++i)t*=i;
    return t;
}

inline int c(int a,int b){
    return f(a)/(f(b)*f(a-b));
}

int32_t main(){
    int n;cin >>n;
    
    for(int i=0;i<n;++i){
        for(int j=0;j<n-i-1;++j)cout<<" ";
        for(int j=0;j<=i;++j)cout<<c(i,j)<<" \n"[j==i];
    }
    

//   cout<<c(5,1)<<" "<<c(5,4);
}