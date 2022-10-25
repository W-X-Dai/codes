// Problem: B. Decode String
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/B
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
	int n,j=0;
	string s;
	vector<int> v;
	
	cin >>n;
	cin >>s;
	
	for(int i=0;i<n;++i){
		if(s[i]=='0'){
			if(s[i+1]=='0')++i;
			for(;j<i-2;++j)v.eb(s[j]-'0');
			v.eb((s[i-1]-'0')+(s[i-2]-'0')*10);
			j=i+1;
		}
		
	}
	for(;j<n;++j)v.eb(s[j]-'0');
	for(auto i:v){
		cout<<(char)(i+'a'-1);
	}
	cout<<'\n';
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}




















