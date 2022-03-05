#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll DFS(vector<ll> v,ll n){
	if(v.empty())return 1;
	
	
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll t,x,y,m,n
	
	cin >>t;
	for(int tt=0;tt<t;tt++){
		
		cin >>n>>m;
		vector<ll> v[n];
		for(i=0;i<m;i++){
			cin >>x>>y;
			v[x].push_back(y);
		}
		
		cin >>q;
		for(i=0;i<q;i++){
			cin >>x;
			n=0;
			cout<<sum(v,n)<<'\n';
			
			
		}
		
	}
	
}

