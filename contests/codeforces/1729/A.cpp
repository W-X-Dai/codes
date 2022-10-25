// Problem: A. Two Elevators
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/A
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

const int N=1e5+5;

inline void sol(){
	int a,b,c,cnta,cntb;
	cin >>a>>b>>c;
	cnta=abs(a-1);cntb=abs(c-b)+abs(c-1);
	if(cnta==cntb)cout<<3<<'\n';
	else if(cnta>cntb)cout<<2<<'\n';
	else cout<<1<<'\n';
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
