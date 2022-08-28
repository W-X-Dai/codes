#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;

struct mys{
    void info(int _l,int _r,int _cnt){
        l=_l,r=_r,cnt=_cnt;
    }
    int l,r,cnt;
}num[N];

inline int val(mys x){
    return (x.cnt<<1)-(x.r-x.l+1);
}

inline void sol(){
    int n,x,arr1[N];
    int mx=-1,mx_id,mx_l,mx_r;
    map<int,mys> arr;
    map<int,int> vis;

    cin >>n;
    for(int i=1;i<=n;++i){
        cin >>x;
        if(vis[x]){
            mys temp;temp.info(arr[x].l,i,arr[x].cnt+1);
        //    cout<<val(arr[x])-val(temp)<<'\n';
            if(val(temp)>0){
                arr[x]=temp;
            }else{
                arr[x].info(i,i,1);
            }
        }else{
            vis[x]=1;
            arr[x].info(i,i,1);
        }
        if(val(arr[x])>mx){
            mx=val(arr[x]),mx_id=x;
            mx_l=arr[x].l;
            mx_r=arr[x].r;    
        }
    }
    cout<<mx_id<<" "<<mx_l<<" "<<mx_r<<'\n';
    return;
}

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
}
