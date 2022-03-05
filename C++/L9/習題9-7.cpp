#include<bits/stdc++.h>
using namespace std;

string s;

int func(char x){
	if(x>95) return (x-32);
	return x;
}

int main(){
	cin >>s;
	int l=s.size(),i,ans=0;
	for(i=0;i<l;i++)ans+=(func(s[i])-64);
	cout<<ans<<'\n';
}

