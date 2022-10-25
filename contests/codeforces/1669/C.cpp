// Problem: C. Odd/Even Increments
// Contest: Codeforces - Codeforces Round #784 (Div. 4)
// URL: https://codeforces.com/contest/1669/problem/C
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

int n,arr[N];

inline void sol(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
	int a=arr[0]%2,b=arr[1]%2;
	for(int i=2;i<n;++i){
		if(i%2==0){
			if(arr[i]%2!=a){
				cout<<"NO\n";
				return;
			}
		}else{
			if(arr[i]%2!=b){
				cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
	return;
}


int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}



























