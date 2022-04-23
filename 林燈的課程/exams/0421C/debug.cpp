#include<bits/stdc++.h>
using namespace std;

long long arr[100005],n,tmp;

int main(){
    freopen("C10.in","r",stdin);

    cin >>n;
    for(int i=1;i<=n;++i)cin >>arr[i];
    for(int i=11292;i<=48853;++i)tmp+=arr[i];
    cout<<tmp<<'\n';

}