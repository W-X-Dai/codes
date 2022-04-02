#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back
using namespace std;

vector <int> v[10005];
ll arr[10005],vis[10005],ans;
int root[10005],rt;


ll dfs(int id){
	vis[id]++;
	if(v[id].empty())return arr[id];
	for(int i=0;i<v[id].size();++i){
		arr[id]+=dfs(v[id][i]);
	}
	return arr[id];
}

int main(){
//	ios::sync_with_stdio(0),cin.tie(0);
	freopen("b_03.in","r",stdin);
	freopen("b_03.out","w",stdout);


	int n,k,t;
	
	while(cin >>n>>k>>t){
		if(n!=k+1){
			for(int i=0;i<k;++i){
				cin >>n>>n>>n;
			}
			for(int i=0;i<t;++i){
				cin >>n;
			}
			cout<<-1<<'\n';
			continue;
		}
		for(int i=0;i<n;++i)v[i].clear();
		fill(arr,arr+n,0);
		fill(root,root+n,-1);
		fill(vis,vis+n,0);
		rt=-1;
		
		int a,b,c;
		for(int i=0;i<k;++i){
			cin >>a>>b>>c;
			v[a].eb(b);
			root[b]=1;
			arr[b]=c;
		}
		for(int i=1;i<=n;++i){
			if(root[i]==-1){
			//	cout<<"i"<<i<<'\n';
				if(rt==-1)rt=i;
				else rt=-2;
			}
		}
	//	cout<<"rt"<<rt<<'\n';
		if(rt==-2){
			cout<<-1<<'\n';
			continue;
		}
		dfs(rt);
		for(int i=1;i<=n;++i){
			if(vis[i]!=1){
				cout<<-1<<'\n';
				rt=-2;
			}
		}
		if(rt==-2)continue;
	
		int m;
		for(int i=0;i<t;++i){
			cin >>m;
			cout<<arr[m]<<" ";
		}
		cout<<'\n';
	}

}

