#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;

string s1,s2;

ll a,b,F[10000];


void give_value(int m);

int main(){
	F[0]=0,F[1]=1;
	for(int i=2;i<91;++i){
		F[i]=F[i-1]+F[i-2];
	}
	
	srand(time(NULL));
	for(int i=0;i<=4;++i){
		int n;
		s1.clear(),s2.clear();
		
		char tmp=i+48;
		s1="fib_0";s1+=tmp;s1+=".in";
		s2="fib_0";s2+=tmp;s2+=".out";			
		
		n=30;
		cout<<n<<'\n';
		give_value(n);
	}
	
}

void give_value(int m){
	ofstream f1,f2;
	f1.open(s1,ios::trunc),f2.open(s2,ios::trunc);
	
	f1<<m<<'\n';
	for(int i=0;i<m;++i){
		a=rand()%90+1;b=rand()%90+1;
		f1<<a<<" "<<b<<'\n';
		f2<<__gcd(F[a],F[b])<<'\n';		
	}	
	
	
}
