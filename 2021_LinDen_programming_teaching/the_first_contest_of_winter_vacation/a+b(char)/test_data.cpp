#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	random_device rd;
	mt19937 rando(rd());
	ofstream f("plus_00.in",ios::trunc),f2("det.out");
	
	
	for(int i=0;i<5000;++i){
		s.clear();int cnt=0;
		int n=rando()%5000+20;
		for(int j=0;j<n;++j){
			int x=rando()%26;
			s+=(char)(x+'a');
			cnt+=x+1;
			if(j!=n-1)s+="+";
		}
		f<<s<<'\n';
		f2<<cnt<<'\n';
	}
	cout<<"the end\n";
	
}

