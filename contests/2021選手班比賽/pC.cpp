#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll vis[100005],w[100005];
ll a,b,n,m,s,ans,bad;
vector<ll> v[1000005];
set<ll> se; 

ll conq(ll x){
	if(v[x].empty()){
		ans+=w[x];
		return ans;
	}
	if(vis[x]==0)ans+=w[x];
	vis[x]=1;
	for(int i=v[x].size()-1;i>=0;i--){
		if(vis[v[x][i]]==0){
			conq(v[x][i]);
		}
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >>n>>m>>s;
	for(int i=1;i<=n;i++){
		cin >>w[i];
	}
	for(int i=0;i<m;i++){
		cin >>a>>b;
		v[b].push_back(a);
	}
	cout<<conq(s);
}

