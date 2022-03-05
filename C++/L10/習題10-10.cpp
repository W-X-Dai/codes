#include<bits/stdc++.h>
using namespace std;

void ht(int n,char b,char e,char m){
	if(n==1){
		cout<<n<<"from"<<b<<"to"<<e<<'\n';
		return;
		}
	ht(n-1,b,m,e);
	cout<< n <<"from"<<b<<"to"<<e<< '\n'; 
	ht(n-1,m,e,b); 
	return;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >>n;
	ht(n,'A','C','B');
}

