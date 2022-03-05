#include <iostream>
using namespace std;
int main(){
		
		int n;
		int a;
		int b;
		int i;
		i=1;
		cout<<"輸入總人數"<<endl; 
		cin>>n;
		int grade[n];
		while(i<=n)
		{	
		cout<<"輸入成績"<<endl; 
		cin>>a>>b;

		cout<<(a+b)/2<<endl;
		grade[i]=(a+b)/2;
		i=i+1;
		}
	int x;
	x=1;
	while(x<=n){
	cout<<x<<":"<<grade[x]<<endl;
	x=(x+1);
	

}


	return 0;


}
