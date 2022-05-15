#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	random_device rd;
	mt19937 rand(rd());
	ofstream f("f91_00.in",ios::trunc);
	for(int i=0;i<5000;++i)f<<rand()%1000000<<'\n';
	for(int i=0;i<5000;++i)f<<rand()%150+1<<'\n';
	for(int i=0;i<500000;++i)f<<rand()%50<<'\n'; 
	for(int i=0;i<500000;++i)f<<1<<'\n';
	for(int i=0;i<1000000;++i)f<<0<<'\n';


}

