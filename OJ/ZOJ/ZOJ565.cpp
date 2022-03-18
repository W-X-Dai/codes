#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,i,j,k,l,ans;
	int n;
	string s;
	stack<char>st;
	
	cin >>n;
	for(i=0;i<n;i++){
		ans=0;
		while(!st.empty())st.pop();
		cin >>s;
		l=s.size();
		for(j=0;j<l;j++){
			if(st.top()=='p' and s[j]=='q'){
				st.pop();
				ans++;
			}else if(s[j]=='p')
				st.push(s[j]);
		}
		cout<<ans<<'\n';
		
	}

}

