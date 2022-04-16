#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back

using namespace std;
ll maxn=3;
vector<int> cnt;

vector<int> solve(int n){
    if(n==3)return {3,1,2};

    auto a=solve(n/2);
    vector<int> ret;
    
    for(int i=0;i<a.size();++i){
        a[i]*=2;ret.eb(a[i]);
    }

    for(ll e:a)ret.eb(e-1);

    //for(ll e:ret)cout<<e<<" ";cout<<'\n';
    return ret;
}

int main(){
    int n;

    cin>>n;
    while(maxn<n)maxn<<=1;cnt=solve(maxn);
    for(ll i:cnt)if(i<=n)cout<<i<<" ";
    cout<<'\n';
} 