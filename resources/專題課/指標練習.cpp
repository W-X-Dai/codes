#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int age=10;
	float ave=1.234;
	int *p=&age;
	cout<<p<<'\n';//P=P����} 
	
	cout<<*p<<'\n';//*P=P���u��(��age=10) 
	
	//�P��"*"���\��:
	//1.�w�q����
	int *a;
	//2.���k�B��
	int b=10*20;
	//3.������Ы��V����
	int y=200;
	int *x=&y;
	cout<<*x+20;

	//nullptr==>�ū��� 
	int *t;
	t=nullptr;
	
	int josh=*p;
	cout<<josh;
}

