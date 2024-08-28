#include<bits/stdc++.h>
#define eb emplace_back
#define pii pair<int,int>
#define mp make_pair
#define a first
#define b second
using namespace std;

int a,b,n,id;

inline void sol(){
	id=0;
	vector<pii> v[100005];
	int vis[1005][1005]{0},source[100005];
	queue<pii> q;
	q.push(mp(0,0));
	while(1){
		auto now=q.front();q.pop();
		if(now.a==n or now.b==n)break;
		vis[now.a][now.b]=1;
		//fill a
		if(!vis[a][now.b])q.push(mp(a,now.b));
		//fill b
		if(!vis[now.a][b])q.push(mp(now.a,b));
		//empty a
		if(!vis[0][now.b])q.push(mp(0,now.b));
		//empty b
		if(!vis[now.a][0])q.push(mp(now.a,0));
		//a to b
		int ta=max(0,now.a+now.b-b),tb=min(now.a+now.b,b);
		if(!vis[ta][tb])q.push(mp(ta,tb));		
		//b to a
		tb=max(0,now.a+now.b-a),ta=min(now.a+now.b,a);
		if(!vis[ta][tb])q.push(mp(ta,tb));
		
	}

}


int main(){
	while(cin >>a>>b>>n)sol();
	return 0;
}