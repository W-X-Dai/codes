#include <iostream>
using namespace std;
int main()
{

	int hr,min,sec1,sec2;
	cout <<"請輸入時間";
	cin>>sec1 ;
	
	hr=sec1/3600; 
	min=(sec1/60-hr*60);
	sec2=sec1%60;
	cout<<"時間是"<<hr<<":"<<min<<":"<<sec2;
}
