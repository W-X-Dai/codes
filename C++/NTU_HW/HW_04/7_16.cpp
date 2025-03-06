#include<bits/stdc++.h>
using namespace std;

//setting up the random function
unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
mt19937 rd(seed); 
uniform_int_distribution<long long> dist(1,6);

int main(){
	double num[13]={0};
	//roll the dice
	for(int i=0;i<36000000;++i){
		int a=dist(rd),b=dist(rd);
		++num[a+b];
	}
	//show the result
	cout<<"number:\t";
	for(int i=1;i<=12;++i)cout<<i<<"\t\n"[i==12];
	cout<<"times:\t";
	for(int i=1;i<=12;++i)cout<<(int)num[i]<<"\t\n"[i==12];

	//calculate the theory times
	double theotimes[13]={0};
	for(int i=1;i<=6;++i){
		for(int j=1;j<=6;++j)
			++theotimes[i+j];
	}
	double dist=0.001;
	//check if the result is reasonable
	for(int i=2;i<=12;++i){
		if(fabs(num[i]/36000000-theotimes[i]/36)<dist)cout<<i<<" is reasonable in an error margin of 1/1000\n";
	}
	return 0;
}


