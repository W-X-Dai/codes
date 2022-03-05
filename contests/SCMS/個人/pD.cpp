#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> f,g;
int main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int n;

    cin >>n;
    ll res=0;
    int cnt=0;
    for(int i=1;i<=n;++i) {
        int l,x;
        cin >>l;
        int Min=10000000,Max=-1,flag=0;
        while(l--){
            cin >>x;
            if(x>Min) flag=1;
            Min=min(Min,x);
            Max=max(Max,x);
        }
        if(!flag){
            f.push_back(Min);
            g.push_back(Max);
            ++cnt;
        }
    }
    res+=cnt*(n-cnt)+n*(n-cnt);
    sort(f.begin(),f.end());
    for(int i=0;i<g.size();++i){
        int p=lower_bound(f.begin(),f.end(),g[i])-f.begin();
        res+=p;
    }
    cout<<res<<'\n';
    return 0;
}