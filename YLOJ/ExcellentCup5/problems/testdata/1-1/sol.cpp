#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int main(){
	vector<string> v;
	int n,x,ans=0;char op;

	cin >>n;
	cin >>x;v.eb(to_string(x));
	for(int i=0;i<n-1;++i){
		cin >>op>>x;
		if(op=='*'){
			int tmp=x*stoi(v[v.size()-1]);
			v.pop_back(),v.eb(to_string(tmp));
		}else{
			v.eb(1,op);
			v.eb(to_string(x));
		}
	}
	x=stoi(v[0]);
	for(int i=1;i<v.size();i+=2){
		if(v[i]=="+"){
			x+=stoi(v[i+1]);
		}else{
			x-=stoi(v[i+1]);
		}
	}
	cout<<x<<'\n';

	
}