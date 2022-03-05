#include<iostream>
using namespace std;

int abs(int a){
	if(a<0)return (a*-1);
	return a;
}

int sqrt(int a){
	return (a*a);
}

int main(){
	int a;
	cin >>a;
	cout<<abs(a)<<'\n';
	cout<<sqrt(a)<<'\n';
}

