#include<bits/stdc++.h>
using namespace std;

int len(double x){
	int i,x;
	while(true){
		if(n/10)
		
		
	}
	
}

double f(int n){
	return 2.0-exp(n);
}

double func(double a,double b){
	double n=(a+b)/2;
	if((n*100000)%10!=0)return n;
	else if(f(n)*f(a)>0)return func(n,b);
	else return func(a,n);
}

int main(){
	cout<<double func(0,1)<<'\n';
}

