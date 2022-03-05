#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ll a=0,b=1;
	int i,n;
	cin >>n;
	
	
	for(i=0;i<n;i++){
		a+=b;
		swap(a,b);
		a=a%100;
		b=b%100;
		cout<<i<<'\t'<<a<<'\n';
	}
	
	
	
}
