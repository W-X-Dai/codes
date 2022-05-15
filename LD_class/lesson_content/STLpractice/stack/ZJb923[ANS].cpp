#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> st;
	int n,mod,x;
	
	cin >>n;
	for(int i=0;i<n;++i){
		cin >>mod;
		if(mod==1)st.pop();
		else if(mod==2)cout<<st.top()<<'\n';
		else cin >>x,st.push(x);
	}


}

