#include<bits/stdc++.h>
#define ll long long
#define MXN 5005

using namespace std;
int main(){
	ll psw[MXN],etr[MXN];//psw:password etr:enter
	ll ori[MXN],num[MXN],in[MXN],out[MXN],det[MXN];
	//original numer in out detect
	int M,N,K;
	

	cin >>M>>N;
	for(int i=1;i<=M;++i)cin >>psw[i];
	for(int i=1;i<=M;++i)cin >>ori[i];
	for(int i=1;i<=N;++i)cin >>num[i];
	for(int i=1;i<=N;++i)cin >> in[i];
	for(int i=1;i<=N;++i)cin >>out[i];
	for(int i=1;i<=N;++i)cin >>etr[i];
	
	cin >>K;
	for(int i=1;i<=K;++i)cin >>det[i];
	
	for(int i=1;i<=N;++i){
		int x=num[i];
		if(psw[x]==etr[i]){
			ori[x]+= in[i];
			ori[x]-=out[i];
			if(ori[x]<0)ori[x]=0;
		}
	}
	for(int i=1;i<=K;++i){
		int x=det[i];
		cout<<ori[x]<<" ";
	}
	cout<<'\n';
	
}

