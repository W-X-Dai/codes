#include<bits/stdc++.h>
using namespace std;

int lcd(int a,int b){
	return (a*b)/__gcd(a,b);
}

int month(int m){
	if(m==1 or m==3 or m==5
		or m==7 or m==8 or 
		m==10 or m==12)return 1;
	if(m==2)return 2;
	return 3;
}

int end(int m,int d,int y){
	if(month(m)==1 and d<=31)return 0;
	if(month(m)==3 and d<=30)return 0;
	if(month(m)==2){
		if(!y%4)if(d<=29)return 0;
		else if(d<=28)return 0;		
	}
	return 1;
}

int main(){
	int n,a,b,i,y,m,d;
	char sp;
	
	cin >>n;
	cin >>a;
	for(i=0;i<n-1;i++){
		cin >>b;
		a=lcd(a,b);
	}
	cin >>y>>sp>>m>>sp>>d;
	d+=a;
	while(true){
		if(m>12)m-=12,y++;
		if(!end(m,d,y))break;
		
		if(month(m)==1 and d>31)d-=31,m++;
		if(m>12)m-=12,y++;
		if(month(m)==2){
			if(y%4==0 and y%100==0 and y%400!=0)if(d>28) d-=28,m++;
			else{
				if(y%4==0 and d>29)d-=29,m++;
				else if(d>28) d-=28,m++;
				if(m>12)m-=12,y++;
			}
		}
		if(month(m)==3 and d>30)d-=30,m++;
		if(m>12)m-=12,y++;
		
	}
	cout<<y<<"/";
	if(m<10)cout<<0<<m<<"/";
	else cout<<m<<"/";
	
	if(d<10)cout<<0<<d<<'\n';
	else cout<<d<<'\n';
}

