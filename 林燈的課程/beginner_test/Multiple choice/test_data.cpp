#include<bits/stdc++.h>
using namespace std;

string s1,s2;

void give_value(int i){
	ofstream f1,f2;
    f1.open(s1,ios::trunc);
    f2.open(s2,ios::trunc);
    
	f1 <<i+1<<'\n';	
	
	if(i==0)f2<<"C\n";
    if(i==1)f2<<"D\n";
    if(i==2)f2<<"B\n";
    if(i==3)f2<<"C\n";
    if(i==4)f2<<"B\n";
    if(i==5)f2<<"A\n";
    if(i==6)f2<<"A\n";
    if(i==7)f2<<"D\n";
    if(i==8)f2<<"C\n";
    if(i==9)f2<<"C\n";
}

int main(){
    
    

    for(int i=0;i<=9;++i){
    	cout<<i<<'\n';
		int x;char tmp=i+48;
		s1.clear(),s2.clear();

		s1="multiplechoose_0";s1+=tmp;s1+=".in";
		s2="multiplechoose_0";s2+=tmp;s2+=".out";
		give_value(i);
	}

}
