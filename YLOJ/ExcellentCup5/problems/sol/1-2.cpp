#include<bits/stdc++.h>
using namespace std;

int y,mon,d,h,m,add;
string s;


int is_lunar(int year){
	if(!(year%400))return 1;
	if(!(year%100))return 0;
	if(!(year%4))return 1;
	return 0;
}

void output(){
	if(y<10)cout<<"000"<<y;
	else if(y<100)cout<<"00"<<y;
	else if(y<1000)cout<<"0"<<y;
	else cout<<y;cout<<"/";

	if(mon<10)cout<<"0"<<mon;
	else cout<<mon;cout<<"/";

	if(d<10)cout<<"0"<<d;
	else cout<<d;cout<<" ";

	if(h<10)cout<<"0"<<h;
	else cout<<h;cout<<":";

	if(m<10)cout<<"0"<<m;
	else cout<<m;
	cout<<'\n';
}

int main(){
	int month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
	map<char,int> time;
    time['N']=-11,time['H']=-10,time['A']=-9,time['P']=-8,time['M']=-7,time['E']=-5,time['B']=-3,time['G']=0,time['I']=7,time['C']=8,time['J']=9,time['S']=11;

	cin >>s;
	add=time[s[4]]-time[s[0]];

	char x;
	cin >>y>>x>>mon>>x>>d>>h>>x>>m;

	if(is_lunar(y))month[2]=29;

	h+=add;
	if(h>23)++d,h-=24;
	if(d>month[mon])++mon,d=1;
	if(mon>12)++y,mon=1;

	if(h<0)--d,h+=24;
	if(d<=0)--mon,d=month[mon];
	if(mon<=0)--y,mon=12,d=31;

	output();
	return 0;
}

/*
NUT/CST
2020/05/02 10:00
*/