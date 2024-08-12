#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int n;
string s;

inline void init(){
	cin >>n>>s;
}

inline void sol(){
	for(int i=0;i<n;++i){
		if(s[i]!='W'){
			int r=0,b=0;
			for(int j=i;j<n;++j,++i ){
				if(s[j]=='R')++r;
				if(s[j]=='B')++b;
				if(s[j]=='W')break;
			}
		//	cout<<r<<" "<<b<<'\n';
			if(r+b==1 || r==0 || b==0){
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
    while(t--)init(),sol();
    return 0;
}
