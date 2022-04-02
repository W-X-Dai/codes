#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	srand(time(0));
	ios::sync_with_stdio(0),cin.tie(0);
	ofstream f("s_00.in",ios::trunc);
	for(int i=0;i<500;++i){
		int n=rand()%500+4500;
		f<<n<<'\n';
		for(int i=0;i<n;++i){
			f<<rand()%1000<<" ";
		}
		f<<'\n';
	}
	

}

