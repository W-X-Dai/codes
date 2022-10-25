// Problem: C. Jumping on Tiles
// Contest: Codeforces - Codeforces Round #820 (Div. 3)
// URL: https://codeforces.com/contest/1729/problem/C
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
	string s;
	int cost;
	
	cin >>s;
	cost=abs(s[0]-s[s.size()-1]);
	
	char l=(char)min((int)s[0],(int)s[s.size()-1]),u=(char)max((int)s[0],(int)s[s.size()-1]);
	int a=l-'a',b=u-'a';
	
	vector<pii> v;
	for(int i=0;i<s.size();++i){
		v.eb(m_p(i+1,s[i]-'a'));
	}
	
	if(s[0]>s[s.size()-1])
		sort(v.begin(),v.end(),[](pii a,pii b){
			if(a.ss==b.ss)return a.ff<b.ff;
			return a.ss>b.ss;
		});
	else 
		sort(v.begin(),v.end(),[](pii a,pii b){
			if(a.ss==b.ss)return a.ff<b.ff;
			return a.ss<b.ss;
		});
	
	vector<int> ans;
	for(pii i:v){
		if(i.ss>=a && i.ss<=b)ans.eb(i.ff);
	}	
	
	cout<<cost<<" "<<ans.size()<<'\n';
	for(int i:ans)cout<<i<<" ";
	cout<<'\n';
	return;
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)sol();
    return 0;
}
