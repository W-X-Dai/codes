// Problem: B. Triple
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/B
// Memory Limit: 256 MB
// Time Limit: 1000 ms
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

const int N=2e5+5;

inline void sol(){
	int n,x,arr[N]={0},mx=2,mxnum;
	
	cin >>n;
	for(int i=0;i<n;++i){
		cin >>x;++arr[x];
		if(arr[x]>mx)mx=arr[x],mxnum=x;
	}
	if(mx==2)cout<<-1<<'\n';
	else cout<<mxnum<<'\n';
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}































