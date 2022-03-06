#include<bits/stdc++.h>
#define ll long long
#define MXN 100005
using namespace std;
int r,c,m,act[15];
int b[15][15],a[15][15]={0};
inline void flap(){
	memset(a,0,sizeof(a));
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			a[r-i-1][j]=b[i][j];
		}
	}
	memcpy(b,a,sizeof(b));
}
inline void revolve(){
	memset(a,0,sizeof(a));
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			a[c-j-1][i]=b[i][j];
		}
	}
	swap(r,c);
	memcpy(b,a,sizeof(b));
}
inline void prt(){
	for(int i=0;i<r;++i){
		for(int j=0;j<c;++j){
			cout<<b[i][j]<<(j==c-1?'\n':' ');
		}
	}
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	while(cin>>r>>c>>m){
		for(int i=0;i<r;++i)
			for(int j=0;j<c;++j)
				cin>>b[i][j];
		
		for(int i=0;i<m;++i)cin>>act[i];
		for(int i=m-1;i>=0;--i){
			if(act[i])flap();
			else revolve();
			//prt();
		}
		cout<<r<<' '<<c<<'\n';
		prt();
	}
	
	return 0;
}

