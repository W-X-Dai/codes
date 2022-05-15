#include<bits/stdc++.h>
using namespace std;

int arr[100005],n,tmp;

int main(){
    freopen("C2.in","r",stdin);

    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    for(int i=17;i<=38;++i)tmp+=arr[i];
    cout<<tmp<<'\n';

}