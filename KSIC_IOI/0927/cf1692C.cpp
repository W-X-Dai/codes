#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int mp[10][10];
char x;

inline void init(){
	for(int i=1;i<=8;++i){
		for(int j=1;j<=8;++j){
			cin >>x;
			mp[i][j]=(x=='#');
		}
	}
}

inline void sol(){
	for(int i=1;i<=8;++i){
		for(int j=1;j<=8;++j){
			if(mp[i][j]){
				if((mp[i+1][j+1] and mp[i+1][j-1]) or
				   (mp[i+1][j-1] and mp[i-1][j-1]) or
				   (mp[i-1][j-1] and mp[i-1][j+1]) or
				   (mp[i+1][j+1] and mp[i-1][j+1])){
					cout<<i<<" "<<j<<'\n';
					return;
				}
			}
		}
	}
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}