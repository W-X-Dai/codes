#include<bits/stdc++.h>
#define inf 1000000009
using namespace std;

int n,q,N=1,seg[1000005];

void build(){
	for(int i=N-1;i>0;--i)seg[i]=min(seg[i<<1],seg[i<<1|1]);
}

void update(int a,int b){
	int id=a+N-1;
	seg[id]=b;id>>=1;
	while(id){
		seg[id]=min(seg[id<<1],seg[id<<1|1]);
		id>>=1;
	}
}

void query(int l,int r){
	int ans=inf;
	for(l+=N-1,r+=N-1;;l>>=1,r>>=1){
		ans=min({ans,seg[l],seg[r]});
		if(l & 1)++l;
		if(!(r & 1))--r;
		if(l>=r)break;
	}
	cout<<ans<<'\n';
	return;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin >>n>>q;
	while(n>N)N<<=1;
	
	
	for(int i=N;i<N+n;++i)cin >>seg[i];
	for(int i=N+n;i<(N<<1);++i)seg[i]=inf;
	build();
	
	while(q--){
		int m,l,r;
		cin >>m>>l>>r;
		if(m==1)update(l,r);
		else query(l,r);
	}
//	for(int i=1;i<N+n;++i)cout<<seg[i]<<" ";
	return 0;
}