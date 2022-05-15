#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	srand(time(0));
	ofstream f("a_03.in",ios::trunc);
	for(int i=0;i<50000;++i){
		if(rand()%10==0)
			f<<rand()%500<<" "<<rand()%500<<'\n';
		else{
			int x,y;
			x=rand()%500+1,y=rand()%10;
			int z=x*pow(3,y);
			f<<z<<" "<<x+y*3-3<<'\n';
		}
	}


}

