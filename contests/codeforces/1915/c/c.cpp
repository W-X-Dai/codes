#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n,arr[N],num;

inline void init(){
    num=0;
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i],num+=arr[i];
}

inline void sol(){
	int x=sqrt(num);
    if(x*x==num)cout<<"Yes\n";
    else cout<<"No\n";
    return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
