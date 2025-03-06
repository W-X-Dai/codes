#include<iostream>
using namespace std;
int main(){
	int a,b,out;
	cin >>a>>b>>out;
	
	if(a*b==0 && a+b==0){
		if(out==0)
			cout<<"AND"<<endl<<"OR"<<endl<<"XOR";
		else
			cout<<"IMPOSSIBLE";
	}if(a*b==0 && a+b!=0){
		if(out==0)
			cout<<"AND";
		else
			cout<<"OR"<<endl<<"XOR";
	}if(a*b!=0){
		if(out==1)
			cout<<"AND"<<endl<<"OR";
		else
			cout<<"XOR";
	}
	
return 0;
	
	
}
