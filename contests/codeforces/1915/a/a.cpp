#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N];

inline void init(){
	n=3;
	for(int i=0;i<n;++i)cin >>arr[i];
}

inline void sol(){
	sort(arr,arr+3);
    if(arr[0]<arr[1])cout<<arr[0]<<'\n';
    else cout<<arr[2]<<'\n';
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
