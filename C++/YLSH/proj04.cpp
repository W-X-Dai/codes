//�p�s�� 
#include<iostream>
using namespace std;
int main(){
	int i,n,x,y;
	cin >>n;//�H�� 
	i=0;
	y=0;
	int n0[n];
	
	while(i<n){
		cin >>n0[i];
		i++;
	}
	i=0;
	cout<<"p1 ok"<<endl;
	while(n0[x]!=x){
		x=n0[y];
		y=n0[x];
		i++;cout<<x<<endl<<y<<endl<<i<<endl;
	}
	cout<<"p2 ok";
	
return 0;
}
