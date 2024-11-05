#include<bits/stdc++.h>
using namespace std;

//determine if side 3 is an int
inline bool is_squre(int x){
	int t=sqrt(x);
	return t*t==x;
}

int main(){
	for(int i=1;i<=500;++i){
		//j begins with i to avoid show the same set of number.
		//i.e. 3 4 5 and 4 3 5
		for(int j=i;j<=500;++j){
			//the result will be ignored if side 3 > 500
			if(i*i+j*j>250000)continue;
			if(is_squre(i*i+j*j))cout<<i<<" "<<j<<" "<<sqrt(i*i+j*j)<<'\n';
		}
	}
	return 0;
}