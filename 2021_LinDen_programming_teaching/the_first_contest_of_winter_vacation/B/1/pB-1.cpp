#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int x,y,k,p;
	freopen("b_03.in","r",stdin);
	freopen("b_03.out","w",stdout);
	
	
	while(cin >>x>>y>>k>>p){
		int ans;
		ans=max((x*y-k*1000)/(p*1000),0);
		if((x*y-k*1000)%(p*1000) && x*y-k*1000>0)++ans;
		cout<<ans<<'\n';
	}


}

