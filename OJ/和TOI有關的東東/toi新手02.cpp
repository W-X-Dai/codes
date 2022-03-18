#include<bits/stdc++.h>
using namespace std;

string s1,s2;
int l;

void plus(int i){
	
	
}

void minus(int i){
	
	
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int i,j,end,m=1;
	
	cin >>s1;
	l=s1.size();
	for(i=0;i<l;i++){
		if(s1[i]=='+'){
			m*=1;
			i++;
			plus(i);
		}else if(s1[i]=='-'){
			m*=-1;
			minus(i);
			
		}else s2[i]=s1[i];
	}
	
	for(i=0;i<l;i++)cout<<s2[i];
}

