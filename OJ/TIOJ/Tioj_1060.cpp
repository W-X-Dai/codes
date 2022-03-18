#include<bits/stdc++.h>
using namespace std;

int h(int x){
	if(x<2) return -1;
	return 2+h(x-1)-h(x-2);
}

int g(int x){
	if(x<=2) return x*x-1;
	return 2;
}

int f(int x){
	if(x==h(x))return 1;
	if(x>h(x)) return f(x-1)-h(x);
	if(x<h(x)) return f(g(x))-g(x);
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int x;
	cin >>x;
	for(int i=0;i<x;i++)cout<<f(i)<<'\n';
	
}


