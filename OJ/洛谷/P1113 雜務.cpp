#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;

int n,cost[10005],vis[10005];
pii depth[10005];
vector<int> v[10005];

void bfs(int id){
	queue<int> qu;
	qu.push(id);
	depth[1].ff=0;
	while(!qu.empty()){
		int id=qu.front();qu.pop();
		vis[id]=1;
		for(auto i:v[id]){
		//	if(!vis[i]){
				depth[i].ff=max(depth[i].ff,depth[id].ff+1);
				qu.push(i),vis[i]=1;
		//	}
		}
	}
}

int main(){
	cin >>n;	
	for(int i=0;i<n;++i){
		depth[i+1].ss=i+1;
		depth[i+1].ff=0;
		int a,c,x=1;
		cin >>a>>c;
		cost[a]=c;
		while(x){
			cin >>x;
			if(x)v[x].eb(a);
		}
	}
	bfs(1);
	int ans=0;
	sort(depth+1,depth+1+n);

	for(int i=1;i<=n;++i){
		int mi=cost[depth[i].ss];
		while(depth[i+1].ff==depth[i].ff and i<=n){
			++i;
			mi=max(mi,cost[depth[i].ss]);
		}
		ans+=mi;
	}
	cout<<ans<<'\n';
}