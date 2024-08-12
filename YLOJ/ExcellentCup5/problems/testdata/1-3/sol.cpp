#include<bits/stdc++.h>
#define int long long
using namespace std;

int32_t main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int n,q,arr[200005]={0},pre[200005]={0};

	cin >>n>>q;
	for(int i=1;i<=n;++i)cin >>arr[i];
	for(int i=1;i<=n;++i)pre[i]=arr[i]*i;
	for(int i=2;i<=n;++i)pre[i]+=pre[i-1],arr[i]+=arr[i-1];

	int l,r;
	while(q--){
		cin >>l>>r;
		cout<<pre[r]-pre[l-1]-(l-1)*(arr[r]-arr[l-1])<<'\n';
	}
}