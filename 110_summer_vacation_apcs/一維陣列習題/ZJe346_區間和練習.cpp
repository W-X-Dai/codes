#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	ll n,arr[200005];
	int a,b;
	
	cin >>n;
	for(int i=1;i<=n;i++)cin >>arr[i];
	
	cin >>n;
	for(int i=0;i<n;i++){
		ll ans=0;
		cin >>a>>b;
		for(;a<=b;a++){
			ans+=arr[a];
		}
		cout<<ans<<'\n';
	}
}

