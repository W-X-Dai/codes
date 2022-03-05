#include<bits/stdc++.h>
using namespace std;

string s;

void supr(){
	int l=s.size();
	for(int i=0;i<l;i++)if(s[i]>=97 and s[i]<=122)s[i]-=32;
	return ;
}

int main(){
	getline(cin,s);
	supr();
	cout<<s;	
	
}

