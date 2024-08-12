#include<bits/stdc++.h>
using namespace std;

int n,q,arr[1005][1005];

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin >>n>>q;
	for(int i=1;i<=n;++i)
	for(int j=1;j<=n;++j){
		char x;cin >>x;
		arr[i][j]=(x=='*');
	}
	for(int i=1;i<=n;++i)
	for(int j=1;j<=n;++j)arr[i][j]+=arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1];

	int x1,y1,x2,y2;
	while(q--){
		cin >>x1>>y1>>x2>>y2;
		cout<<arr[x2][y2]-arr[x2][y1-1]-arr[x1-1][y2]+arr[x1-1][y1-1]<<'\n';
	}
}