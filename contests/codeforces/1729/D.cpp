// Problem: D. Friends and the Restaurant
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/D
// Memory Limit: 256 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//Author:W_X_Dai
//Date:2022/09/06

#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=1e5+5;

inline void sol(){
	int n,a[N],b[N],arr[N];
	cin >>n;
	for(int i=0;i<n;++i)cin >>a[i];
	for(int i=0;i<n;++i)cin >>b[i];
	
	for(int i=0;i<n;++i)arr[i]=b[i]-a[i];
	sort(arr,arr+n);
	
	int l=0,r=n-1,cnt=0;
	for(int i=0;i<n && l<r;++i){
		if(arr[l]+arr[r]>=0){
			++cnt;
			++l,--r;
		}else ++l;
	}
	cout<<cnt<<'\n';
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}






















