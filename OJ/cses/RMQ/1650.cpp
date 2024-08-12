#include<bits/stdc++.h>
using namespace std;

int n,q,N=1,seg[1000005];

void build(){
	for(int i=N-1;i>0;--i)seg[i]=seg[i<<1]^seg[i<<1|1];	
}

void query(int l,int r){
	int ans=0;
	for(l+=N-1,r+=N-1;;l>>=1,r>>=1){
		if(l & 1)ans^=seg[l],++l;
		if(~r & 1)ans^=seg[r],--r;
	//	if(l==r)ans^=seg[l];
		if(l>=r)break;
	}
	cout<<ans<<'\n';
	return;
}


int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin >>n>>q;
	while(N<n)N<<=1;

	for(int i=N;i<N+n;++i)cin >>seg[i];
	build();

	while(q--){
		int l,r;
		cin >>l>>r;
		query(l,r);
	}

//	for(int i=1;i<N+n;++i)cout<<seg[i]<<" ";
	return 0;
}