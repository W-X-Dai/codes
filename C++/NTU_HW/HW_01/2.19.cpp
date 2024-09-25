#include<bits/stdc++.h>
using namespace std;

int main(){
	cout<<"Input three different integers: ";
	
	double a,b,c;
	//input the three numbers
	cin >>a>>b>>c;

	//output the results
	cout<<"Sum is: "<<a+b+c<<'\n';
	cout<<"Average is: "<<(a+b+c)/3<<'\n';
	cout<<"Product is: "<<a*b*c<<'\n';
	cout<<"Smallest is: "<<min({a,b,c});
	cout<<"Largest is: "<<max({a,b,c});

	return 0;
}