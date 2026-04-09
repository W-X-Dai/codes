#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;
int arr[N];

inline int bs(int l, int r, int target){
    int mid=(l+r)/2;
    if(arr[mid]==target)return mid;
    if(l==r)return 0;

    //search left
    if(arr[mid]>target){
        return bs(l, mid, target);
    }else{
        return bs(mid+1, r, target);
    }

}

int main(){
    int n, k;

    cin >>n>>k;
    for(int i=1;i<=n;++i){
        cin >>arr[i];
    }

    while(k--){
        int x;
        cin >>x;
        cout<<bs(1, n, x)<<'\n';
    }
    
    return 0;
}