#include<bits/stdc++.h>
#define N 100005

using namespace std;

int mxn;
vector<int> v[N];
bool arr[N],vis[N];

void dfs(int root,int mx){
	cout<<"rt:"<<root<<" "<<mx<<'\n';
	vis[root]=1;
	for(int i=0;i<v[root].size();++i){
		dfs(v[root][i],mx+1);
	}
	mxn+=mx;
}

int main(){
	int n,t,x,root;
	mxn=0;

	cin >>n;
	for(int i=1;i<=n;++i){
		cin >>t;
		for(int j=0;j<t;++j){
			cin >>x;
			v[x].push_back(i);
			arr[x]=1;
		}
	}
	for(int i=1;i<=n;++i){
		if(arr[i]==0){
			root=i;
			cout<<i<<'\n';
		}
	}
		
	dfs(root,0);
	cout<<mxn<<'\n';
}