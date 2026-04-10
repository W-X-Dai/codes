#include<bits/stdc++.h>
using namespace std;

const int N=5e5+5;
int arr[N];

inline string bs(int l, int r, int target){
    int result=0;
    while(true){
        int mid=(l+r)/2;
        if(arr[mid]==target){
            return "Yes";
        }
        if(l==r)return "No";
        
        //find left
        if(arr[mid]>target){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    return "No";
}

int main(){
    int n, k;

    cin >>n>>k;
    for(int i=0;i<n;++i){
        cin >>arr[i];
    }
    sort(arr, arr+n);

    while(k--){
        int x;
        cin >>x;
        cout<<bs(0, n-1, x)<<'\n';
    }
    
    return 0;
}