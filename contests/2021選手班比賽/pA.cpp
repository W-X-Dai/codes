#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,a=0,b=0,c=0;
	string s;
	
	cin >>s;
	l=s.size();
	for(int i=0;i<l-1;i++){
		if(s[i]=='y' && s[i+1]=='l')a++;
		if(s[i]=='l'){
			if(s[i+1]=='t')b++;
			if(s[i+1]=='y' && s[i+2]=='g' && i+2<l)c++;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<'\n';
	
	
}

