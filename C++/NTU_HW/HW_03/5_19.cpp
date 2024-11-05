#include<bits/stdc++.h>
using namespace std;

int main(){
	double pi;
	int target=0;
	for(int i=1;i<=200000;++i){
		//transfet i into double
		double t=(double)i;
		//calculate the value
		pi+=((i & 1) ? 4/(2*t-1) : -4/(2*t-1));
		cout<<i<<"\t"<<pi<<'\n';
		//record the target value
		if(pi>=3.14159 and pi<3.1416 and !target)target=i;
	}
	cout<<target<<"terms before the value begins with 3.14159\n";
	return 0;
}