#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll N,A,B,Q;
ll arr[1000005],pre[1000005];

int main(){
//  ios::sync_with_stdio(0),cin.tie(0);

    cin >>N>>A>>B;
    ll x;
    cin >>arr[1];
    for(int i=2;i<=N;++i)cin >>arr[i];
//    for(int i=0;i<=N;++i)cout<<arr[i]<<" ";
    cin >>Q;
    int l,r;
    for(int i=0;i<Q;++i){
        set<int> s;
        cin >>l>>r;
        for(int j=l;j<=r;++j)s.insert(arr[j]);
        ll cnt=0;for(auto z:s)cnt+=z;
        cout<<cnt<<'\n';
    }



}

/*
9 1 9
1 2 3 2 3 2 2 3 4
4
1 9
1 6
8 8
4 7



*/