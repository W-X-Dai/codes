#include<bits/stdc++.h>
#define eb emplace_back
#define N 10000
using namespace std;

int main(){
	random_device rd;
	mt19937 rand(rd());
	freopen("f91_00.in","w",stdout);
	
	int n=250000,x;
	while(n--){
		if(x<20)x=rand()%1000000+1;
		else x=rand()%20+1;
		cout<<x<<'\n';
	}
	cout<<0<<'\n';
	
	
	cerr<<"the end";
}

