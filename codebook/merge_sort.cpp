#include<iostream>
#include<vector>
#define eb emplace_back
using namespace std;

int n,arr[1000005];

inline void mg(int l,int mid,int r){
//    cout<<l<<" "<<r<<'\n';
    if(l>r)return;
    vector<int> a,b;
    for(int i=l;i<=mid;++i)a.eb(arr[i]);
    for(int i=mid+1;i<=r;++i)b.eb(arr[i]);
    
    int pa=0,pb=0;
    for(int i=l;i<=r;++i){
        if(pa==a.size())arr[i]=b[pb],++pb;
        else if(pb==b.size())arr[i]=a[pa],++pa;
        else if(a[pa]<b[pb])arr[i]=a[pa],++pa;
        else arr[i]=b[pb],++pb;
    }
    return;
}

inline void divi(int l,int r){
//    cout<<l<<" "<<r<<'\n';
    if(l<r){
        int mid=(l+r)/2;
        divi(l,mid);
        divi(mid+1,r);
        mg(l,mid,r);
    }
    return;
}


int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i];
    divi(0,n-1);
    for(int i=0;i<n;++i)cout<<arr[i]<<" \n"[i==n-1];
    return 0;
}