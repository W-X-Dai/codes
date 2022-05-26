#include<bits/stdc++.h>
using namespace std;

int n,m,arr[100005];

inline int bs(int l,int r){
    int mid=(l+r)/2;

    if(arr[mid]==m)return mid;
    else if(m>arr[mid]) return bs(mid,r);
    else return bs(l,mid);
    
}

int main(){
    cin >>n>>m;
    for(int i=1;i<=n;++i)cin >>arr[i];
    cout<<bs(1,n)<<'\n';
}

/*
6 5
1 1 3 4 5 9
 


*/