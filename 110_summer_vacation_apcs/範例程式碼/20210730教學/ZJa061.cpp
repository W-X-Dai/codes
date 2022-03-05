#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int a[505],b[505],c[505];
int l;

void num(){
	for(int i=0;i<l;i++){
		a[i]=s1[i]-48;
		b[i]=s2[i]-48;
	}
}

void add(){
	int i,next=0;
	for(i=0;i<l;i++){
		c[i]+=a[i]+b[i]+next;
		next=c[i]/10;
		c[i]%=10;
	}
	
}

void show(){
	for(int i=l-1;i>=0;i--){
		cout<<c[i];
	}
	cout<<'\n';
}

int main(){
	char op;
	
	cin >>s1>>op>>s2;
	l=s1.size();
	
	num();
	
	if(op=='+')add();
/*	if(op=='-')mns();
	if(op=='*')mul();
	if(op=='/')div();*/
	
	show();
	
}

