// Problem: E. Guess the Cycle Size
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/E
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
	int lb=1,rb=18,result;
	
	while(lb!=rb){
		cout<<"? "<<1<<" "<<(lb+rb>>1)<<'\n';
		cin >>result;
		if(result==-1)rb>>=1;
		else{
			lb=max(result,lb+rb>>1);
			if(lb>rb)swap(lb,rb);
		}
		if(!result)return;
	}
	cout<<"! "<<lb<<'\n';
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
