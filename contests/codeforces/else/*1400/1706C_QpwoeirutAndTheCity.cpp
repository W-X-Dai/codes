#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,arr[100005],tr[100005];

inline ll gen(int i){
    return max(0LL,max(arr[i+1],arr[i-1])+1-arr[i]);
}

inline void sol(){
    cin >>n;
    for(int i=0;i<n;++i)cin >>arr[i];
    for(int i=1;i<n;++i)tr[i]=gen(i);

    int mx=-1,mx_id,cnt=0;
    for(int i=1;i<n;++i)
        if(tr[i]>mx)mx=tr[i],mx_id=i;
    
    for(int i=mx_id-1;i>0;i-=2)cnt+=tr[i];
    for(int i=mx_id+1;i<n;i+=2)cnt+=tr[i];

    cout<<cnt<<'\n';
    return;
}




int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}