#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define x first
#define y second
using namespace std;

int mp[20][20],n,ct=0x3f3f3f3f;
vector<int> ans,tmp;
bool vist[100005];
void dfs(int now,vector<int> arr,int cnt){
	if(arr.size()==n){
		if(ct>cnt){
			ans=arr,ct=cnt;
		}else if(ct==cnt&&arr<ans){
			ct=cnt;
		}
		return;
	}
	for(int i=1;i<=n;++i){
		if(!vist[i]&&i!=now){
			vist[i]=1,arr.emplace_back(i);
			dfs(i,arr,cnt+mp[now][i]);
			vist[i]=0,arr.pop_back();
		}
	}
	return;
}
int main(){
    cin >>n;
    for(int i=1;i<=n;++i){
		for(int j=1;j<=n;++j){
			cin >>mp[i][j];
		}
	}
	dfs(0,tmp,0);
	cout<<ct<<'\n';
	for(auto e:ans)cout<<e<<' ';
}