#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,arr[1000005];

inline void sol(){
    bool up=1;
    ll head,tail=0,now=-1,cnt=2;

    cin >>n;head=n-1;
    for(int i=0;i<n;++i)cin >>arr[i];

    for(int i=0;i<n-1;++i){
        if(arr[i]>arr[i+1]){head=i;break;}
    }
    for(int i=n-1;i>0;--i){
        if(arr[i]>arr[i-1]){tail=i;break;}
    }
//    cout<<head<<" "<<tail<<'\n';

    if(head==tail){cout<<1<<'\n';return;}

    for(int i=head;i<tail;++i){
        if(arr[i]>arr[i+1]){
            if(!up)++cnt,up=1;
        }
        if(arr[i]<arr[i+1]){
            if(up)++cnt,up=0;
        }
    }
    cout<<cnt<<'\n';
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--){
        sol();
    }
}