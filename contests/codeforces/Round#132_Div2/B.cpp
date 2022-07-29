#include<bits/stdc++.h>
#define ll long long
using namespace std;
int n,m,s,t;
ll a[200005],pre[200005],vpre[200005];
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;++i){
		cin>>a[i];if(i==0)continue;
		if(a[i]<a[i-1])pre[i]=a[i-1]-a[i]+pre[i-1];
		else pre[i]=pre[i-1];
	}
	for(int i=n-1;i>=0;--i){
		if(i==n-1)continue;
		if(a[i]<a[i+1])vpre[i]=a[i+1]-a[i]+vpre[i+1];
		else vpre[i]=vpre[i+1];
	}
	while(m--){
		cin>>s>>t;
		if(s<=t){
			cout<<pre[t-1]-pre[s-1]<<'\n';
		}else
			cout<<vpre[t-1]-vpre[s-1]<<'\n';
	}
	return 0;
} 