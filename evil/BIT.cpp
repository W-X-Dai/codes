#include<bits/stdc++.h>
using namespace std;

int n,bit[100005];

inline int lowbit(int x){
    return (x & -x);
}

inline int query(int x){
    int sum=0;
    return sum;
}

int main(){
    for(int i=0;i<=40;i+=2){
        
        cout<<"i="<<i<<" "<<lowbit(i)<<'\n';
    }
}