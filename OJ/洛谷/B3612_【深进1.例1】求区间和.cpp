#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,m;
ll arr[100005];

int main(){
	cin >>n;
	for(int i=1;i<=n;++i)cin >>arr[i];
	for(int i=2;i<=n;++i)arr[i]+=arr[i-1];

	cin >>m;
	while(m--){
		int l,r;
		cin >>l>>r;
		cout<<arr[r]-arr[l-1]<<'\n';
	}
}