#include<bits/stdc++.h>
#define int long long
using namespace std;

int arr[200005],n,q;

int32_t main(){
	cin >>n>>q;
	for(int i=1;i<=n;++i)cin >>arr[i];
	for(int i=2;i<=n;++i)arr[i]+=arr[i-1];
	while(q--){
		int l,r;
		cin >>l>>r;
		cout<<arr[r]-arr[l-1]<<'\n';
	}
	return 0;
}