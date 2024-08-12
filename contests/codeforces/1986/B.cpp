#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair
#define inf 0x3f3f3f3f

using namespace std;

const int N=100+5;

int n,m,arr[N][N];

inline void init(){
	cin >>n>>m;
	for(int i=0;i<=102;++i)
	for(int j=0;j<=102;++j)
		arr[i][j]=0;
	
	for(int i=1;i<=n;++i)
	for(int j=1;j<=m;++j)
		cin >>arr[i][j];
}

inline void sol(){
	for(int i=1;i<=n;++i)
	for(int j=1;j<=m;++j){
		if(arr[i][j]>arr[i-1][j] && arr[i][j]>arr[i][j-1] &&
		  arr[i][j]>arr[i+1][j] && arr[i][j]>arr[i][j+1])
		arr[i][j]=max({arr[i-1][j],arr[i][j-1],arr[i+1][j],arr[i][j+1]});
	}
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			cout<<arr[i][j]<<" ";
		}
		cout<<'\n';
	}
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}