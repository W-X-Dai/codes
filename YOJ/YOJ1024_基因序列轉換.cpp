//YOJ1024_°т¦]§З¦CВаґ« 
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	string s;
	cin >>s;
	cout<<'\n';
	int l=s.size();
	
	for(int i=0;i<l;i++){
		
		if(s[i]=='A')cout<<'U';
		if(s[i]=='T')cout<<'A';
		if(s[i]=='C')cout<<'G';
		if(s[i]=='G')cout<<'C';
		
	}
	
	
	
return 0;
}
