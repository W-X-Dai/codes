#include<bits/stdc++.h>
#define ll long long
using namespace std;

int n,cnt,arr[50005],vis[50005]={0};

inline void mark(int s){
	vis[s]=1;
	int x=arr[s];
	while(x!=s){
		vis[x]=1;
		x=arr[x];
	}
}

int main(){
//	ios::sync_with_stdio(0),cin.tie(0);	
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
	for(int i=0;i<n;++i){
		if(!vis[i])mark(i),++cnt;
	}
	cout<<cnt<<'\n';

}

