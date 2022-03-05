#include<bits/stdc++.h>
using namespace std;

int add(int a,int b){
	return a+b;
}

int min(int a,int b){
	return a-b;
}

int mul(int a,int b){
	return a*b;
}

int divi(int a,int b){
	return a/b;
}

int main(){
	int a,b;
	char op;
	
	cin >>a>>op>>b;
	
	if(op=='+')cout<<add(a,b)<<'\n';
	if(op=='-')cout<<min(a,b)<<'\n';
	if(op=='*')cout<<mul(a,b)<<'\n';
	if(op=='/')cout<<divi(a,b)<<'\n';
}

