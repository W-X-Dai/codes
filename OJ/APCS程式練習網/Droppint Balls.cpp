#include<bits/stdc++.h>
using namespace std;

bool tree[1030];

int op(int d){
	int i,n=pow(2,d-1);
	for(i=1;i<n;){
		if(tree[i]){
			tree[i]=0;
			i=2*i+1;
		}else {
			tree[i]=1;
			i=2*i;
		}
	}
	
	return i;
}

int main(){
	int d,n,m,ans;
	while(cin >>n){
		for(int ii=0;ii<n;ii++){
			cin >>d>>m;
			for(int i=0;i<1030;i++)tree[i]=0;
			for(int i=1;i<=m;i++)ans=op(d);
			
			cout<<ans<<'\n';
		}
	}
}

