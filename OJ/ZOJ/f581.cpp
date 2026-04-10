#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;
int arr[N], pre[N], m, n, location;

inline int bs(int l, int r, int target){
    int result=0;
    while(true){
        // cout<<l<<" "<<r<<'\n';
        int mid=(l+r)/2;
        if(pre[mid]>=target and pre[mid-1]<target){
            return mid;
        }
        if(l==r)return -1;
        
        if(pre[mid]>target){
            r=mid;
        }else{
            l=mid+1;
        }
    }
    cout<<"no\n";
    return -1;
}

int main(){
    cin >>n>>m;
    for(int i=0;i<n;++i){
        cin >>arr[i];
    }
    pre[0]=arr[0];
    for(int i=1;i<n;++i){
        pre[i]=arr[i]+pre[i-1];
        // cout<<pre[i]<<" ";
    }

    // cout<<'\n';
    while(m--){
        // cout<<"loc: "<<location<<'\n';
        int x, sum=0, t, rest, new_loc;
        cin >>x;
        
        if(location==0)rest=pre[n-1];
        else rest=pre[n-1]-pre[location-1];
        
        // cout<<"rest: "<<rest<<'\n';
        if(rest>=x){
            new_loc=bs(location, n-1, x+pre[location-1]);

        }
        else{
            new_loc=bs(0, n-1, x-rest);
        }

        location=(new_loc+1)%n;
    }
    cout<<location<<'\n';
    return 0;
}