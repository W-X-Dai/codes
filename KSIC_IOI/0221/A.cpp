#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,x1,y1,x2,y2;
	
	cin >>n;
	while(n--){
		cin>>x1>>y1>>x2>>y2;

		cout<<__gcd(abs(x1-x2),abs(y1-y2))-1<<'\n';		
	}

}