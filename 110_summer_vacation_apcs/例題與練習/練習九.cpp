#include<bits/stdc++.h>
using namespace std;

int main(){
	char s[5000],x;
	cin.getline(s,5000);
	
	int i,l=strlen(s);
	
	for(i=0;i<l;i++){
		x=s[i];
		if(x>=65 and x<=90){
			if((x-13)<65)s[i]=x+13;
			else s[i]=x-13;
		}else if(x>=97 and x<=122){
			if((x+13)>122)s[i]=x-13;
			else s[i]=x+13;
		}else s[i]=x;
	}
	for(i=0;i<l;i++){
		cout<<s[i];
	}
	
	cout<<'\n';
	
}
