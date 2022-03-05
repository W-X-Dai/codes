#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int x;
	x=*a;
	*a=*b;
	*b=x;
}

int main(){
	int a,b;
	cin >>a>>b;
	swap(&a,&b);
	cout<<a<<" "<<b<<'\n';
}


