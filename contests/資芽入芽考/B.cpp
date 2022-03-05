#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define mp make_pair
#define ll long long
using namespace std;

ll n,nn,arr[100005],mx=1;
bitset<100005> exist;
vector<ll> v,arr1;

ll det(ll h){
    ll ans=0;
    for(int i=0;i<n;++i){
        if(arr1[i]<=h)exist[i]=0;
    }
    if(exist[0]==1)++ans;
    for(int i=1;i<n;++i){
        if(exist[i]!=exist[i-1] && exist[i]==1){
            ++ans;
        }
    }
    return ans;

}

int main(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i],exist[i]=1;
    
    int status;
    arr1.eb(arr[0]);
    if(arr[1]>arr[0])status=1;
    else status=-1;
    for(int i=1;i<n;++i){
        if((arr[i]<arr[i-1]) && status==1){
            arr1.eb(arr[i-1]);
            ++nn;
            status=-1;
        }
        if(status==-1 && arr[i]>arr[i-1]){
            v.eb(arr[i-1]);
            arr1.eb(arr[i-1]);
            ++nn;
            status=1;
        }

    }
    for(ll i:v){
        mx=max(mx,det(i));
    }
    cout<<mx<<'\n';
}