//TOJ 03
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,a,b;
	cin >>t;
	
	while(t--){
		cin >>a>>b;
		while(a*b!=0){
			if(a<b)swap(a,b);
			a-=b;
		}
		cout<<a+b<<'\n';
	}
	return 0;
}
