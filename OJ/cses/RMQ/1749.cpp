#include<bits/stdc++.h>
using namespace std;

int n,N=1,arr[100005],seg[1000005];

void build(){
	for(int i=N-1;i>0;--i){
		seg[i]+=seg[i<<1]+seg[i<<1|1];
	}
}

void update(int k){
	while(k){
	//	cout<<k<<'\n';
		--seg[k];
		k>>=1;
	}
}

void remove(int k){
	for(int i=1;;){
	//	cout<<i<<'\n';
	//	cout<<k<<" "<<seg[i<<1]<<'\n';
		if(k>seg[i<<1]){
			k-=seg[i<<1];
			i=(i<<1|1);
		}else{
			i<<=1;
		}
		if(i>=N){
		//	cout<<i<<" ";
			cout<<arr[i-N+1]<<" ";
			update(i);
			return;
		}
	}
	return;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);

	cin >>n;
	while(N<n)N<<=1;

	for(int i=1;i<=n;++i)cin >>arr[i];
	if(n==1){
		cout<<arr[1];
		return 0;
	}
	
	for(int i=N;i<N+n;++i)seg[i]=(bool)arr[i-N+1];
	build();

//	for(int i=1;i<N+n;++i)cout<<seg[i]<<" ";
//	cout<<'\n';

	for(int i=0;i<n;++i){
		int k;cin >>k;
		remove(k);
	//	for(int i=1;i<N+n;++i)cout<<seg[i]<<" ";
	//	cout<<'\n';
	}
	cout<<'\n';
	return 0;
}