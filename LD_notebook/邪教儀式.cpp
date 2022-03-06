#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int y,m,d;
	cin>>y>>m>>d;
	if(y<=0||(m<=0||m>12)||(d<=0||d>31)){//猭ら戳 
		cout<<"error\n";
	}else if((m==4||m==6||m==9||m==11)&&d==31){
		cout<<"error\n";
	}else if(m==2&&d>28+((y%4==0&&y%100!=0)||y%400==0)){
		cout<<"error\n";
	}else if((y%4==0&&y%100!=0)||y%400==0){//ぃ秥 
		cout<<"No\n";
	}else if(m==d||m%d==0||(~d&1||d==13)){
	//ら戳ぃ单るるぃ琌ら戳计ら戳獶案计ぃ单13 
		cout<<"No\n";
	}else cout<<"Yes\n";
	return 0;
} 

