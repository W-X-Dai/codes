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


inline void sol(){
	string a,b;cin >>a>>b;
	swap(a[0],b[0]);
	cout<<a<<" "<<b<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
