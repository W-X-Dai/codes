#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,i;
	stack<int> st;
	
	cin >>n;
	for(i=0;i<n;i++){
		cin >>m;
		if(m==1)st.pop();
		if(m==2)cout<<st.top()<<'\n';
		if(m==3)cin >>x,st.push(x);
	}




}

