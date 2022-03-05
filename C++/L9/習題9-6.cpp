#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin >>s;
	int l=s.size(),i;
	
		for(i=0;i<l/2;i++){
			if(s[i]!=s[l-i-1]){
				cout<<"NO"<<'\n';	
				return 0;
			}
		}

	cout<<"YES"<<'\n';
	return 1;
}

