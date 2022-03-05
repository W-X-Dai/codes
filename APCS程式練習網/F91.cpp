#include<bits/stdc++.h>
using namespace std;

long long func(int n){
	if(n<=100)	return func(func(n+11));
	if(n>=101)	return n-10;
	
}


int main(){
	
	int n;
	while(cin >>n){
		if(!n) break;
		cout<<"f91("<<n<<") = "<<func(n)<<'\n';
	}
	
}

