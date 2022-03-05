#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[200005],n,x,q;

int main(){
    cin >>n;
    for(int i=1;i<=n;++i){
        cin >>arr[i];
        arr[i]+=arr[i-1];
    }
    cin >>q;
    int l,r;
    for(int i=0;i<q;++i){
        cin >>l>>r;
        cout<<arr[r]-arr[l-1]<<'\n';
    }

}