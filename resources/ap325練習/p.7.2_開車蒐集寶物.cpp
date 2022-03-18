#include<bits/stdc++.h>
#define eb emplace_back
#define pb pop_back()
#define ll long long
using namespace std;

int val[500005],vis[500005];
int m,n,a,b,ma=0,tmp;
vector<int> v[500005];

bool found(int a,int b){
	int l=v[a].size();
	for(int i=0;i<l;i++){
		if(v[a][i]==b)return 1;
	}
	if(a==b)return 1;
	return 0;
}

int func(int x){
	tmp+=val[x];
	vis[x]=1;
	for(int i=0;i<v[x].size();i++){
		if(!vis[v[x][i]])return func(v[x][i]);
	}
	return tmp;
}

int main(){

	cin >>n>>m;
	for(int i=0;i<n;i++){
		cin >>val[i];
	}
	for(int i=0;i<m;i++){
		cin >>a>>b;
		if(found(a,b))continue;
		v[a].eb(b);
		v[b].eb(a);
	}
	for(int i=0;i<n;i++){
		if(!vis[i]){
			tmp=0;
			ma=max(ma,func(i));
		}
	}
	cout<<ma<<'\n';
}

