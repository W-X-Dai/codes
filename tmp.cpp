//interval minima
#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int n, q, arr[100005];

int target;
int binary_search(int l, int r){
//    cout<<l<<" "<<r<<'\n';
    if(l>r)return -1; // Not found
    int mid=l+r>>1;
    if(arr[mid]==target)return mid; // Found the target
    if(arr[mid]>target)return binary_search(l, mid-1); // Search in the left half
    return binary_search(mid+1, r); // Search in the right half
}

int main(){
    cin >>n>>q;
    for(int i=0;i<n;++i)
        cin >>arr[i];
    while(q--){
        cin >>target;
        cout<<lower_bound(arr, arr+n, target)-arr<<'\n';
    }
}
/*
8 8
1 2 3 4 5 6 7 8
1 1 4
1 2 6
2 0 10
1 0 7
1 2 6
2 3 5
1 2 7
1 0 7

6 5
2 3 5 1 4
1 0 1
1 2 4
2 0 5
2 2 2 
1 0 1
1 2 4
*/