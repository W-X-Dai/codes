#include<bits/stdc++.h>
using namespace std;
int main(){
	char s[500];
	cin.getline(s,500);
	int l=strlen(s),i,ans=0;
	
	for(i=0;i<l;i++){
		int x=s[i];
		
		if(x>95) ans+=(x-32)-64;
		else ans+=x-64;
	}
	cout<<ans<<'\n';
}

