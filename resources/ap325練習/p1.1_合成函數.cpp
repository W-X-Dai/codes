#include<bits/stdc++.h>
using namespace std;

int func(){
	int a,b;
	char tmp[5];
	cin >>tmp;
//	cout<<x<<" ";
	if(tmp[0]=='f'){
		a=func();
		return 2*a-1;	
	}
	else if(tmp[0]=='g'){
		a=func();
		b=func();
		return a+2*b-3;
	}else return atoi(tmp);
}

int main(){
	cout<<func()<<'\n';
}

