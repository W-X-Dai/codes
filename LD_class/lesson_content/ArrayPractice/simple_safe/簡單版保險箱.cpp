#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	
	int n,k,t,a,b;
	
	while(cin >>n>>k>>t){
		ll safe[10005]={0};
		if(n==-1)break;
		
		for(int i=1;i<=n;++i){
			cin >>safe[i];
		}
		for(int i=1;i<=k;++i){
			cin >>a>>b;
			safe[a]+=b;
			if(safe[a]<0)safe[a]=0;
		}
		while(t--){
			cin >>a;
			cout<<safe[a]<<" ";
		}
		cout<<'\n';
	}
	
	
}
