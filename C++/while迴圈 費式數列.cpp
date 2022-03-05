#include <iostream>
using namespace std;
int main(){
	int a,b,c,i,n;
	a=1;
	b=0;
	cout<<"����"<<endl;
	cin>>n; 
	i=1;
	while(i<=n){
	//	cout<<i<<":"<<a<<endl;
		c=a;
		a=a+b;
		b=c;
		i=i+1;
		a%=100;
	}
	cout<<a;
	return 0;
}
