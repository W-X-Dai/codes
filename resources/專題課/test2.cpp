#include<bits/stdc++.h>
using namespace std;
int main(){
	int total=0,l;
	char s[1000];
	
	cin.getline(s,1000);
	l=strlen(s);
	
	for(int i=0;i<l;i++){
		if(s[i]>95)s[i]=s[i]-32;
		total+=s[i]-64;
	}
	cout<<total<<endl;
}

