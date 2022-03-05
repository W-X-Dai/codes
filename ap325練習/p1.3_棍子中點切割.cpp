#include<bits/stdc++.h>
#define ll long long
#define MXN 50005
using namespace std;

int p[MXN];

int bs(ll x,ll l,ll r){
	if(l>r){
		if(x-l>r-x)return r;
		else return l;
	}
	
	if(l==r)return l;
	int mid=(l+r)/2+1;
	
	if(x>mid)bs(mid,r);
	else bs(mid-1,r);
	
}

ll cut(ll l,ll r){
	int mid=(l+r)/2;
	return 
}

int main(){
	int N,len;
	
	cin >>N>>len;
	for(int i=0;i<N;i++){
		cin >>p[i];
	}
	cout<<cut(0,len);
}

