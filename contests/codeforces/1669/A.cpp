// Problem: A. Division?
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/A
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
	int n;cin >>n;
	if(n<=1399)cout<<"Division 4\n";
	else if(n<=1599)cout<<"Division 3\n";
	else if(n<=1899)cout<<"Division 2\n";
	else cout<<"Division 1\n";
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
