//小群體 
#include<iostream>
using namespace std;
int main(){
	int i,n,x,y;
	cin >>n;//人數 
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
