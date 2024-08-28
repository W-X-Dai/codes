#include<bits/stdc++.h>
#define pii pair<int,int>
#define x first
#define y second
using namespace std;

int graph[1005][1005],dir[4][2]={{0,1},{0,-1},{-1,0},{1,0}},direct[1005][1005];
int n,m,ansl=0x3f3f3f3f,flag;
string ans,tar="RLUD";

pii s,e;


int main(){
	//initial
	cin >>n>>m;
	for(int i=1;i<=n;++i){
		for(int j=1;j<=m;++j){
			char x;cin >>x;
			if(x!='#')graph[i][j]=1;
			if(x=='A')s={i,j};
			if(x=='B')e={i,j};
		}
	}
	//cout<<s.x<<" "<<s.y<<'\n';
	//bfs
	queue<pii> q;
	q.push(s);
	while(!q.empty()){
		int x=q.front().x,y=q.front().y;
		q.pop();
		for(int k=0;k<4;++k){
			if(graph[x+dir[k][0]][y+dir[k][1]]){
				q.push({x+dir[k][0],y+dir[k][1]});
				graph[x+dir[k][0]][y+dir[k][1]]=0;
				direct[x+dir[k][0]][y+dir[k][1]]=k;
			}					
		}
		if(e.x==x && e.y==y){
			flag=1;break;
		}
	}
	// for(int i=1;i<=n;++i){
	// 	for(int j=1;j<=m;++j){
	// 		cout<<direct[i][j]<<"";
	// 	}
	// 	cout<<'\n';
	// }
	if(!flag)cout<<"NO\n";
	else{
		while(1){
			int tx=e.x,ty=e.y;
			e.x-=dir[direct[tx][ty]][0];
			e.y-=dir[direct[tx][ty]][1];
			//cout<<e.x<<" "<<e.y<<" "<<direct[e.x][e.y]<<'\n';

			ans+=tar[direct[tx][ty]];
			if(e.x==s.x && e.y==s.y){
				break;
			}
		}
		cout<<"YES\n"<<ans.size()<<'\n';
		for(int i=ans.size()-1;i>=0;--i)cout<<ans[i];
		
	}

}
/*
1 2
AB

*/