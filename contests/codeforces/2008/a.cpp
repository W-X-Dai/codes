#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

string s;
int n;
int arr[500][500];

inline void init(){
	int tmp;
	cin >>n>>s;

}

inline void sol(){
	int r=sqrt(n);
	if(r*r!=n){
		cout<<"NO\n";
		return;
	}

	int id=0;
	for(int i=1;i<=r;++i){
		for(int j=1;j<=r;++j){
			arr[i][j]=(s[id]=='1');
			++id;
		}
	}

	for(int i=1;i<=r;++i){
		if(arr[1][i]==0 or arr[i][1]==0 or arr[r][i]==0 or arr[i][r]==0){
			cout<<"NO\n";
			return;
		}
	}

	for(int i=2;i<=r-1;++i){
		for(int j=2;j<=r-1;++j){
			if(arr[i][j]==1){
				cout<<"NO\n";
				return;
			}
		}
	}

	cout<<"YES\n";
}

int32_t main(){
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)
    init(),sol();
    return 0;
}