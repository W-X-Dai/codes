#include<iostream>
using namespace std;
int f(int x){
	if(x==1){
		return 1;
	}
	return f(x-1)*x;
	
}
int n,x=1;
int main(){
	cin >>x;
	cout<<f(x);	
	
	return 0;
}
