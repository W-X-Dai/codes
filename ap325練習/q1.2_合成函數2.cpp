#include<bits/stdc++.h>
using namespace std;

int func(){
	int a,b,c;
	char tmp[50];
	cin >>tmp;
	if(tmp[0]=='f'){
		a=func();
		return 2*a-3;	
	}
	else if(tmp[0]=='g'){
		a=func();
		b=func();
		return 2*a+b-7;
	}else if(tmp[0]=='h'){
		a=func();
		b=func();
		c=func();
		return 3*a-2*b+c;
	}else return atoi(tmp);
}

int main(){
	cout<<func()<<'\n';
}

