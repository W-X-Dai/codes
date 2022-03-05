#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	stack<char> st;
	int i,l,n;
	
	while(cin >>s){
		n=0; 
		l=s.size();
		for(i=0;i<l;i++){
			if(s[i]==')'){
				if(st.empty()){
					n=-1;
					break;
				}
				if(st.top()=='(')st.pop(),n++;
				else{
					n=-1;
					break;
				}
			}else st.push(s[i]);
		}
		if(!st.empty())n=-1;
		if(n==-1)cout<<0<<'\n';
		else cout<<n<<'\n';
		
	}
	
	
}

