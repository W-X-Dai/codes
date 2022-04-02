#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	ofstream f("b_03.in",ios::trunc);
	
	int n,k,t;
	n=10000;
	
	f<<n<<" "<<n-1<<" "<<1000<<'\n';
	for(int i=1;i<=3333;++i){
		f<<i<<" "<<i*3-1<<" "<<rand()%500<<'\n';
		f<<i<<" "<<i*3<<" "<<rand()%500<<'\n';
		f<<i<<" "<<i*3+1<<" "<<rand()%500<<'\n';
	}
	for(int i=0;i<1000;++i){
		f<<rand()%n+1<<" ";
	}
}

