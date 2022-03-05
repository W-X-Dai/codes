#include<bits/stdc++.h>
using namespace std;

bool isNumber(int i,string s){
	return s[i]+0<=39 and s[i]+0>=30;
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	int l,i,j,n,x;
	
	cin >>s;
	l=s.size();
	for(i=0;i<l;i++){
		
		if(isdigit(s[i])){
			x=1;
			n=0;
			
			while(isdigit(s[i+1])){
				x++;
				i++;
			}
			for(j=0;j<x;j++){
				n+=(s[i]-48)*pow(10,j);
				i--;
			}
		
			for(j=0;j<n;j++)cout<<s[i+x+1];
			i+=x+1;
		}
		else cout<<s[i];
		
	}
	cout<<'\n';
	
}

