#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int l,a=0,b=0,n;
	
	cin >>s;
	l=s.size();
	
	for(int i=0;i<l;i++){
		if(i%2)a+=s[i]-48;
		else b+=s[i]-48;
	}
	cout<<abs(a-b);
}

