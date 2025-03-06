//【範例3-1】請寫一程式，輸入2科測驗成績,輸出總分和平均。
#include <iostream>
using namespace std;

int main(){
	int a,b,i,total;
	
	cout<<"請輸入班級總人數"<<endl;
	cin >>total;
	int ave[total];
	i=1;
while(i<=total) {
	
	cout<<"請依座號順序輸入、成績1、成績2"<<endl;
	cin >>a>>b;
	cout<<"成績1:"<<a<<endl;
	cout<<"成績2:"<<b<<endl;
	cout<<"總分:"<<a+b<<endl;
	cout<<"平均:"<<(a+b)/2<<endl; 
	ave[i]=(a+b)/2;
	i=i+1;
}
	i=1;
	cout<<"座號"<<" 平均"<<endl;
while(i<=total){
	
		cout<<i<<"    "<<ave[i]<<endl;
		i=i+1;
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
