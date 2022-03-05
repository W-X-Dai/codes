#include<bits/stdc++.h>
using namespace std;

void swwap(int *a,int *b){
	int c;
	c=*a;
	*a=*b;
	*b=c;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int a,b;
	cin >>a>>b;
	
	swwap(&a,&b);
	cout<<a<<b;
	
	
}

