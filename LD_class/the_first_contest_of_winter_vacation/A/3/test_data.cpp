#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	string s;
	random_device rd;
	mt19937 rando(rd());
	ofstream f("plus_02.in",ios::trunc),f2("det.out");
	int mx=0;
	
	for(int i=0;i<5000;++i){
		s.clear();int cnt=0;
		int n=rando()%500+20;n=rand()%3+2;
		for(int j=0;j<n;++j){
			int x=rando()%13;
			s+=(char)(x+'a');
			cnt+=x+1;
			if(j!=n-1)s+="+";
		}
		f<<s<<'\n';
		f2<<cnt<<'\n';mx=max(mx,cnt);
	}
	cout<<"the end\n";
	cout<<mx<<'\n';
	
}

