#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int x;
	x=*a;
	*a=*b;
	cout<<"\n"<<a<<'\n';
	cout<<"x:"<<x;
	*b=x;
}

int main(){
	int a,b;
	cin >>a>>b;
	swap(&a,&b);
	cout<<a<<" "<<b<<'\n';
}

