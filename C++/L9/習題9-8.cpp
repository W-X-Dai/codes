#include<bits/stdc++.h>
using namespace std;

char otp(char x){
	if(x>=65 and x<=90){
		if((x-13)<65) return (x+13);
		return (x-13);
	}
	if(x>=97 and x<=122){
		if((x+13)>122) return (x-13);
		return x+13;
	}
	

}

int main(){
	string s;
	getline(cin,s);
	int i,l=s.size();
	
	for(i=0;i<l;i++){
		cout<<otp(s[i]);
	}
	cout<<'\n';
	
	
	
	
}

