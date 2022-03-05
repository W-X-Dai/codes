#include<bits/stdc++.h>
using namespace std;

int func(int n,int x){
	if(n==1)return 1;
	x*=func(n-1,x);
	
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x=1;
	int n;
	cin >>n;
	cout<<func(n,x)<<'\n';
	
	
}

