#include<bits/stdc++.h>
using namespace std;

int main(){
	for(int i=0;i<8;++i){
		//print stars
		for(int j=0;j<8;++j)cout<<"* ";
		//output an extra space on even rolls
		cout<<endl<<" "[i & 1];
	}
	
	return 0;
}