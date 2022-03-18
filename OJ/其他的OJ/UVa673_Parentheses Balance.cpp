#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int n,suc;
	stack<int> st;
	string s;
	
	cin >>n;
	while(n--){
		suc=1;
		while(!st.empty())st.pop();
		cin >>s;
		int l=s.size();
		for(int i=0;i<l;++i){
			if(s[i]=='(' && s[i]=='['){
				st.push(s[i]);
			}else {
				if(s[i]==')' && !st.empty()){
					if(st.top()=='(')st.pop();
					else {
						cout<<"2No\n";
						suc=0;
						break;
					}
				}else if(!st.empty()){
					if(st.top()==']')st.pop();
					else {
						cout<<"3No\n";
						suc=0;
						break;
					}
				}
				
			}
			
		}
		if(suc){
			if(!st.empty())cout<<"No\n";
			else cout<<"Yes\n";
		}
	}
}

