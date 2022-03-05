#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	random_device rd;
	mt19937 rand(rd());
	ofstream f("plus_00.in",ios::trunc);
	for(int i=0;i<500;++i)
		f<<rand()%10000000000<<" "<<rand()%10000000000<<'\n';
}

