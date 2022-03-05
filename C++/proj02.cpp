#include<iostream>
using namespace std;
int main(){
	int x,a0,b0;
	char a,b;
	x=1;
	a0=0;
	b0=0;
	while(x==1){
		cin >>a>>b;
		if(a<=57 && a>=48)
			a0=a0+a-48;
		else if(b<=57 && b>=48)
			b0=b0+b-48;
		else
			x=2;
	}
	if(a0>=b0)
		cout<<a0-b0;
	else
		cout<<b0-a0;
		
return 0;	
}
