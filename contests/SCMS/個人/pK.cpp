#include <bits/stdc++.h>
#define MX 500005   

using namespace std;

struct edge{
    int node,next,w;
}h[MX];

int head[MX],vis[MX],color[MX],dis[MX];
int tot,n,m;

void addedge(int u ,int v ,int w){
    ++tot;
    h[tot]=(edge){v,head[u],w};
    head[u]=tot;
}

void bfs(){
	queue<int> q;
	q.push(n);
	dis[1]=-1;
	dis[n]=0;
	while(!q.empty()){
		int x=q.front();q.pop();
		for(int i=head[x],d;i!=0;i=h[i].next){
			d=h[i].node;
			if(vis[d]==3)continue;
			vis[d]|=1<<h[i].w;
			if(vis[d]==3){
				q.push(d);
				dis[d]=dis[x]+1;
			}else{
				color[d]=h[i].w^1;
			}
		}
	}
}

int read(){
	char k=getchar();int x=0;
	while(k<'0' || k>'9') k=getchar();
	while(k>='0' && k<='9')
		x=x*10+k-'0',k=getchar();
	return x;
}

int main(){
	cin >>n>>m;
	for(int i=1,u,v,w;i<=m;++i){
		u=read(),v= read(),w=read();
		addedge(v,u,w);
	}
	bfs();
	cout<<dis[1]<<endl;
	for(int i=1;i<=n;++i)putchar(color[i]+'0');
}
