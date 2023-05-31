#include <bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int n,arr[N],cnt;

inline void init(){
	cin >>n;cnt=0;
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
    map<int,int> mp;
	sort(arr,arr+n);
    for(int i=0;i<n;++i)++mp[arr[i]];
    for(int i=0;i<n;++i){
        int x=arr[i];
        if(mp[x]){
            ++cnt;
            --mp[x];
            while(mp[x+1])--mp[x+1],++x;
        }
    }
    cout<<cnt<<'\n';

}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
