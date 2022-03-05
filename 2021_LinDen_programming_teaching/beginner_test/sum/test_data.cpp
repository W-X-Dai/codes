#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;

string s1,s2;

void give_value(int n);

int main(){
	srand(time(NULL));
	for(int i=6;i<=9;++i){
		int n;
		s1.clear(),s2.clear();
		
		char tmp=i+48;
		s1="sum_1";s1+=tmp;s1+=".in";
		s2="sum_1";s2+=tmp;s2+=".out";			
		
		n=rand()%40+50;
		cout<<n<<'\n';
		give_value(n);
	}
	
}

void give_value(int n){
	ofstream f1,f2;
	f1.open(s1,ios::trunc),f2.open(s2,ios::trunc);
	
	f1<<n<<'\n';
	ll a=1,b=1,sum=0;
	for(int i=0;i<n;++i){
		sum+=a;
		a+=b;
		swap(a,b);
	}
	f2<<sum<<'\n';	
}
