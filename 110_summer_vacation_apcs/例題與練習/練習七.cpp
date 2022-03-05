#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,i,k,x;
	char s[500];
	cin.getline(s,500);
	
	l=strlen(s);
	for(i=0;i<l/2;i++){
		if(s[i]!=s[l-i-1]){
			k=0;
			break;
		}
		k=1;
	}
	
	if(k==1)cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	
}

