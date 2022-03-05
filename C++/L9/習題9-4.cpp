#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int n=0,i,l;
	
	cin >>s1>>s2;
	l=s1.size();
	
	for(i=0;i<l;i++){
		if(s1[i]==s2[i])n++;
	}
	
	cout<<n<<'\n';
	
}

