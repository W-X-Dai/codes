//#include<bits/stdc++.h>
#include<iostream>
#include<cstring>
using namespace std;
int main(){
	char s[1000],s1[1000];
	int i,l,ans=0;
	
	cin.getline(s,1000);
	l=strlen(s);
	
	for(i=0;i<l;i++){
		s1[i]=s[i];
	}
	
	strrev(s);
	
	for(i=0;i<l;i++){
		if(s1[i]!=s[i]){
			ans=1;
		}
	}
	
	if(ans==0)cout<<"Yes"<<endl;
	else cout<<"NO"<<endl;
	
	return 1;
}

