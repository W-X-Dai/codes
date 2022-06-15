#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;

struct S{
    int l,r,cnt;
}num[N];

inline void sol(){
    int n,arr[N],arr1[N];
    map<int,int> mp;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>arr[i],arr1[i]=arr[i];
        num[i].l=-1,num[i].r=-1;
        num[i].cnt=0;
    }

    sort(arr1,arr1+n);
    for(int i=0;i<n;++i)mp[arr1[i]]=i;
    for(int i=0;i<n;++i){
        int id=mp[arr[i]];
            
    }

}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
