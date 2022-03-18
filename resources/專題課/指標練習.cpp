#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int age=10;
	float ave=1.234;
	int *p=&age;
	cout<<p<<'\n';//P=P的位址 
	
	cout<<*p<<'\n';//*P=P的真值(為age=10) 
	
	//星號"*"的功用:
	//1.定義指標
	int *a;
	//2.乘法運算
	int b=10*20;
	//3.提領指標指向的值
	int y=200;
	int *x=&y;
	cout<<*x+20;

	//nullptr==>空指標 
	int *t;
	t=nullptr;
	
	int josh=*p;
	cout<<josh;
}

