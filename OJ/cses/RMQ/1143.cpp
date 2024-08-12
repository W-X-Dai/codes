#include<bits/stdc++.h>
using namespace std;

int n,m,N=1,seg[1000005];

void build(){
	for(int i=N-1;i>0;--i){
		seg[i]=max(seg[i<<1],seg[i<<1|1]);
	}
}

void update(int k,int x){
	seg[k]-=x;k>>=1;
	while(k){
	//	cout<<k<<'\n';
		seg[k]=max(seg[k<<1],seg[k<<1|1]);
		k>>=1;
	}
	return;
}

void query(int x){
	for(int i=1;;){
	//	cout<<i<<" "<<N<<'\n';
		if(seg[i<<1]>=x)i<<=1;
		else if(seg[i<<1|1]>=x)i<<=1,++i;
		else{
			cout<<0<<" ";
			return;
		}
		if(i>=N){
		//	cout<<i<<'\n';
			cout<<i-N+1<<" ";
			update(i,x);
			return;
		}
	}
	return;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);

	cin >>n>>m;
	while(N<n)N<<=1;

	for(int i=N;i<N+n;++i)cin >>seg[i];
	build();

	while(m--){
		int x;
		cin >>x;
		query(x);
	}
}

/*
8 2
3 2 4 1 5 5 2 6
4 4
*/