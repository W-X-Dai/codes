#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	//ios::sync_with_stdio(0),cin.tie(0);
	
	int a,b,c,rus=0;
	cin >>a>>b>>c;
	a=(bool)a,b=(bool)b,c=(bool)c;
//	cout<<a<<' '<<b<<' '<<c<<'\n';
	if((a & b)==c){
		cout<<"AND\n";
		rus=1;
	}
	if((a | b)==c){
		cout<<"OR\n";
		rus=1;
	}
	if((a ^ b)==c){
		cout<<"XOR\n";
		rus=1;
	}
	if(!rus)cout<<"IMPOSSIBLE\n";
	
}

