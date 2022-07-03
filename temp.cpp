#include<bits/stdc++.h>
using namespace std;

inline bool det(int n){
    for(int i=2;i*i<=n;++i){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main(){
    
    for(int i=2;i<100;++i){
        if(det(i))cout<<i<<" ";
    }
    cout<<'\n';
}
