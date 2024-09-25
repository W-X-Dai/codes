//cp 1669D
#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=1e5+5;

int n;
string s;

inline void init(){
	cin >>n>>s;
}

inline void sol(){
	int r=0,b=0,flag=1;
	for(int i=0;i<n;++i){
		if(s[i]=='B')++b;
		if(s[i]=='R')++r;
		if(s[i]=='W' or i==n-1){
			if(r+b){
				if(r==0 or b==0 or r+b==1){
					flag=0;
					break;
				}

			}
			r=0,b=0;
		}

	}
	if(flag)cout<<"YES\n";
	else cout<<"NO\n";
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}