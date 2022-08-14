#include<bits/stdc++.h>
using namespace std;

int n,arr[200005],cnt,k=1;

int main(){
    ios::sync_with_stdio(0),cin.tie(0);

    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];

    sort(arr+1,arr+1+n);
    for(int i=1;i<=n;++i){
        if(arr[i]>=k){
            ++cnt;
            ++k;
        }
    }
    cout<<cnt<<'\n';
    return 0;
}