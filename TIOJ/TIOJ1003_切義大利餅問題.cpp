#include<bits/stdc++.h>
#define int long long
#define N 500050
using namespace std;
signed main(){
    int arr[60]={0},n;
    arr[0]=1;

    cin >>n;
    for(int i=1;i<=n;++i){
        arr[i]=arr[i-1]+i;
    }
    cout<<arr[n]<<'\n';
}
