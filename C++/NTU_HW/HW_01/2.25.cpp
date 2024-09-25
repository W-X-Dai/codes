#include<bits/stdc++.h>
using namespace std;

int main(){
	int a,b;
	cin >>a>>b;

	//determine if a%b==0, check if b==0 first to avoid the error of a%0
	cout<<((b  && !(a%b)) ? "YES" : "NO");
	
	return 0;
}