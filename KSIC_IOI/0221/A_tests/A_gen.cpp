#include<bits/stdc++.h>
using namespace std;

int main(){
	srand(time(0));

	int n=20;
	cout<<n<<'\n';
	for(int i=0;i<n;++i){
		for(int j=0;j<4;++j)cout<<rand()%100000+1<<" \n"[j==3];
	}

}