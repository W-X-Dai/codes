#include<bits/stdc++.h>
using namespace std;
int main(){
	char x;
	int i,n=0;
	string s;
	
 	getline(cin,s);
 	int l=s.size();
	cin >>x;
	for(i=0;i<l;i++){
		if(s[i]==x)n++;	
	}
	cout<<n<<'\n';

}

