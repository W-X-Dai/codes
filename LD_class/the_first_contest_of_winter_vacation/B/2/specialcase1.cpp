#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);

	ofstream f("b_01.in",ios::trunc);
	f<<10000<<" "<<9999<<" "<<9999<<'\n';
	for(int i=1;i<=9999;++i){
		f<<i<<" "<<i+1<<" "<<i*10<<'\n';
	}
	for(int i=2;i<=10000;++i){
		f<<i<<" ";
	}
	f<<'\n';

}

