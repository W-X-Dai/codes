#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
    int n;
    double x,ave=0,sum=0;

    cin >>n;
    for(int i=0;i<n;++i){
        cin >>x;
        sum+=x*x,ave+=x;
    }
    ave/=n,sum/=n;
    ave*=ave;

    cout<<(int)sqrt(sum-ave)<<'\n';
}