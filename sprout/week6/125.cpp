#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back
#define mod 10000019

using namespace std;

ll arr[1000005],n;
struct st{
    int lt;
    int rt;
    ll cnt;
};

st sol(st a,st b){
    vector<ll> ret;
    ll cntt=(a.cnt+b.cnt)%mod,tmp=0;
    ll i=a.lt,j=b.lt;

    while(i<a.rt || j<b.rt){
        if(i<a.rt && (j==b.rt || arr[i]<=arr[j])){
            cntt=(cntt+arr[i]*(j-b.lt))%mod;
            ret.eb(arr[i++]);
            cntt=(cntt+tmp)%mod;
        }else{
            tmp=(tmp+arr[j])%mod;
            ret.eb(arr[j++]);
        }
    }
    for(int i=0;i<ret.size();++i){
        arr[a.lt+i]=ret[i];
    }

    //for(int i=0;i<n;++i)cout<<arr[i]<<" ";cout<<'\n';
    return {a.lt,b.rt,cntt};
}

st mg(int l,int r){
    if(r-l==1)return {l,r,0};
    
    int mid=(l+r)/2;
    return sol(mg(l,mid),mg(mid,r));
}

int main(){
    cin>>n;
    for(int i=0;i<n;++i)cin>>arr[i];

    cout<<mg(0,n).cnt<<'\n';
}