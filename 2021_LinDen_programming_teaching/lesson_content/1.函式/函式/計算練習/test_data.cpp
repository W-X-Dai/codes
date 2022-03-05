#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;

void give_value(ll a,ll b);
void add(ll a,ll b);
void minu(ll a,ll b);
void mul(ll a,ll b);
void divi(ll a,ll b);

string s1,s2;

void give_value(int n);
int main(){
	
	srand(time(NULL));
	for(int i=0;i<=0;++i){
		int x;char op;
		ofstream f1;
		ll n,a,b;
		s1.clear(),s2.clear();
	
		char tmp=i+48;
		s1="cp_0";s1+=tmp;s1+=".in";
		s2="cp_0";s2+=tmp;s2+=".out";			
		

		f1.open(s1);
		n=5000;
		cout<<n<<'\n';
		give_value(n);
		for(int i=0;i<n;++i){
			int mod=rand()%4+1;
			a=rand()%50000;
			b=rand()%50000;
			if(mod==1)add(a,b);
			else if(mod==2)minu(a,b);
			else if(mod==3)mul(a,b);
			else if(mod==4)divi(a,b);
		}
	}
	
}

void give_value(int n){
	ofstream f1;
	f1.open(s1);
	f1<<n<<'\n';
}

void add(ll a,ll b){
	ofstream f1;
	f1.open(s1,ios::app);
	f1<<a<<'+'<<b<<'\n';	
	ofstream f2;
	f2.open(s2,ios::app);
	f2<<a+b<<'\n';
}
void minu(ll a,ll b){
	ofstream f1;
	f1.open(s1,ios::app);
	f1<<a<<'-'<<b<<'\n';	
	ofstream f2;
	f2.open(s2,ios::app);
	f2<<a-b<<'\n';
}
void mul(ll a,ll b){
	ofstream f1;
	f1.open(s1,ios::app);
	f1<<a<<'*'<<b<<'\n';
	ofstream f2;
	f2.open(s2,ios::app);
	f2<<a*b<<'\n';
}
void divi(ll a,ll b){
	ofstream f1;
	f1.open(s1,ios::app);
	f1<<a<<'/'<<b<<'\n';
	ofstream f2;
	f2.open(s2,ios::app);
	f2<<a/b<<'\n';
}

