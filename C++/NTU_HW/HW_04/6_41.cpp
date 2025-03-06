#include<bits/stdc++.h>
using namespace std;

inline int gcd(int a,int b){
	//if b=0, stop the recursion
	if(!b)return a;
	return gcd(b,a%b);
}

int main(){
	int a,b;
	cin >>a>>b;
	if(a<b)swap(a,b);
	cout<<gcd(a,b);
	return 0;
}