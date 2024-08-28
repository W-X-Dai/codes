#include<bits/stdc++.h>
#define pii pair<int,int>
#define ff first
#define ss second
using namespace std;

int graph[1005][1005],dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}};
int n,m,ans;

int main(){
	//initial
	cin >>n>>m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			char x;cin >>x;
			if(x=='.')graph[i][j]=1;
		}
	}

	//bfs
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			if(graph[i][j]==1){
				int x=i,y=j;
				++ans;
				//direction
				queue<pii> q;
				q.push({i,j});
				while(!q.empty()){
					x=q.front().ff,y=q.front().ss;
					q.pop();
					for(int k=0;k<4;++k){
						if(graph[x+dir[k][0]][y+dir[k][1]]){
							q.push({x+dir[k][0],y+dir[k][1]});
							graph[x+dir[k][0]][y+dir[k][1]]=0;
						}
					}					
				}

			}
		}
	}
	cout<<ans<<'\n';

}
