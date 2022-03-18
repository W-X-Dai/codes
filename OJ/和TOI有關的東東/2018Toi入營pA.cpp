#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	string s;
	getling(cin,s);
	int arr[500][2];
	int arr1[500];
	int l=s.size(),i,j,n;
	
	for(i=0;i<l;i++){
		if(s[i]=='('){
			while(s[i]!=')'){
				
				for(j=0;arr[j]!=')';j++)arr1[j]=s[i];
				for(j=0;arr[j]!=0;j++)arr[arr1[j]]+=s
			}
		}
		
		
		
	}
	
	
}

