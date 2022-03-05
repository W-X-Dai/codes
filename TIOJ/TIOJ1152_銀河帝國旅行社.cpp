#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> v[10005]; 
int n,vis[10005],root,len;

void dfs(int r,int l){
	len=max(len,l);vis[r]=1;
	for(int i=0;i<v[r].size();++i){
		int x=v[r][i];
		if(!vis[x])dfs(x,l+1);
	}
}

int main(){
//	ios::sync_with_stdio(0),cin.tie(0);
	
	cin >>n;int tmp;
	for(int i=0;i<n;++i){
		while(cin >>tmp){
			if(tmp==-1)break;
			v[i].push_back(tmp);
			v[tmp].push_back(i);
		}
	}
	for(int i=0;i<n;++i){
		fill(vis,vis+n,0);
		dfs(i,0);
	}
	cout<<len<<'\n';
}

