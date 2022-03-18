#include<bits/stdc++.h>
#define ll long long 
using namespace std;

char ope(ll a,ll b,int op){
	if(op=='+')return a+b;
	if(op=='-')return a-b;
	if(op=='*')return a*b;
	if(op=='/')return a/b;
}

ll num(int x){
//	cout<<">>>"<<x<<'\n';
	if(x>=48  and x<=57)return (x-48);
	return x;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ll a,b,op,n,i,j,x,l;
	stack<ll>st;
	string s;
	
	cin >>n;
	for(ll ii=0;ii<n;ii++){
		while(!st.empty())st.pop();
		cin >>s;
		l=s.size();
		
		for(i=0;i<l;i++){
			x=s[i];
			
			if(!st.empty()){
				if(x==')'){
				//	st.pop();
					b=st.top(),st.pop();
					op=st.top(),st.pop();
					a=st.top(),st.pop();
					st.pop();
					a=num(a);
					b=num(b);
					cout<<a<<'\n';
					cout<<b<<'\n';
					st.push(ope(a,b,op));
				}else st.push(x);
			}else st.push(x);
			
		}
		cout<<st.top()<<'\n';
	}
	
	
	
}
