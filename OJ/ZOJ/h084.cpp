#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

const int N=2e5+5;
int arr[N], pos[N];
int n, k;
vector<int> h;

inline bool detect(int h){
    // cout<<"h: "<<h<<'\n';
    int len=0, pos_id=0;
    for(int i=0;i<n;++i){
        if(arr[i]>=h)++len;
        else{
            len=0;
        }
        
        if(pos_id<k and len>=pos[pos_id]){
            len-=pos[pos_id];
            pos_id++;
        }
        if(pos_id==k)break;
    }
    return pos_id==k;
}

int main(){
    cin >>n>>k;
    for(int i=0;i<n;++i){
        cin >>arr[i];
    }
    for(int i=0;i<k;++i){
        cin >>pos[i];
    }

    int l=1, r=1e9, mx=-1;
    while(l<=r){
        int mid=l+(r-l)/2;
        if(detect(mid)){
            mx=mid;
            l=mid+1;
        }else{
            r=mid-1;
        }
    }
    cout<<mx<<'\n';
    return 0;
}