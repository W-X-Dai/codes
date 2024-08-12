#include<bits/stdc++.h>
#define inf 1000000009
using namespace std;

int n,q,arr[200005],seg[2000005];
int start=1;

void build(){
	for(int i=start-1;i>0;--i){
		seg[i]=min(seg[i<<1],seg[i<<1|1]);
	}
}

void query(int l,int r){
	int ans=inf;
	for(l+=start-1,r+=start-1;;l>>=1,r>>=1){
		ans=min({ans,seg[l],seg[r]});
		if(l & 1)++l;
		if(!(r & 1))--r;
		if(l>=r)break;
	}
	cout<<ans<<'\n';
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	
	cin >>n>>q;
	while(start<=n)start<<=1;
	for(int i=start;i<start+n;++i)cin >>seg[i];
	for(int i=start+n;i<(start<<1);++i)seg[i]=inf;
	build();
	
	while(q--){
		int l,r;
		cin >>l>>r;
		query(l,r);
	}
//	for(int i=1;i<start+n;++i)cout<<seg[i]<<" ";
	return 0;
}