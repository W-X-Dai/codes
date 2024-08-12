#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,q,N=1,seg[1000005];

void query(int x){
	int ans=0;
	while(x){
		ans+=seg[x];
		x>>=1;
	}
	cout<<ans<<'\n';
}

void update(int l,int r,int x){
	for(l+=N-1,r+=N-1;;l>>=1,r>>=1){
		if(l & 1)seg[l]+=x,++l;
		if(~r & 1)seg[r]+=x,--r;
		if(l>=r)break;
	}
}

int32_t main(){
	ios::sync_with_stdio(0),cin.tie(0);

	cin >>n>>q;
	while(N<n)N<<=1;

	for(int i=N;i<N+n;++i)cin >>seg[i];
	
	while(q--){
		int m,l,r,x;
		cin >>m;
		if(m==1){
			cin >>l>>r>>x;
			update(l,r,x);
		}else{
			cin >>x;
			query(x+N-1);
		}
	}

}