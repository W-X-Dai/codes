#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;
int arr[N];

inline int bs(int l, int r, int target){
    int result=0;
    while(true){
        int mid=(l+r)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(l==r)return 0;
        
        //find left
        if(arr[mid]>target){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    return 0;
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