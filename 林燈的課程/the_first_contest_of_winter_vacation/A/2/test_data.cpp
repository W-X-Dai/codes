#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	ofstream f("a_02.in");
	srand(time(0));
	int n=24,s=100;
	f<<n<<" "<<s<<'\n';
	for(int i=0;i<n;++i){
		f<<rand()%100+15<<" ";
	}
	f<<'\n';
	for(int i=0;i<n;++i){
		f<<rand()%20+1<<" ";
	}
	f<<'\n';


}

