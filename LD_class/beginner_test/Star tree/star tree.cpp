#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;
int main(){
	int n;
	while(cin >>n){
		int t=(n+1)/2;
		for(int i=1;i<=t;++i){
			for(int j=0;j<t-i;++j)cout<<" ";
			for(int j=0;j<i*2-1;++j)cout<<"*";
			cout<<'\n';
		}
		t=n-t;
		for(int i=0;i<t;++i){
			for(int j=0;j<t;++j)cout<<" ";
			cout<<"*\n";
		}
		
		cout<<'\n';
		
	}
	
}


