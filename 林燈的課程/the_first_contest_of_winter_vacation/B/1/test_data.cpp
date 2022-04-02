#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	srand(time(0));
	ios::sync_with_stdio(0),cin.tie(0);
	ofstream f("b_03.in",ios::trunc);if(!f)cout<<"err\n";
	for(int i=0;i<5000;++i){
		int x,y,k,p;
		x=rand()%1000;srand(x);
		y=rand()%1000;srand(y);
		k=rand()%10;srand(k);
		p=rand()%10+1;
		f<<x<<" "<<y<<" "<<k<<" "<<p<<'\n';
	}

	cout<<"the end\n";
}

