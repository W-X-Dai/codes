#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s1,s2;

void gv();

int main(){
	
	
	for(int i=0;i<=0;++i){
		s1="ss_0";s2="ss_0";
		char tmp=i+48;
		s1+=tmp,s1+=".in",s2+=tmp,s2+=".out";
		gv();
	}
	
	
} 

void gv(){
	int n=5000,k,t,a,b;
	ofstream f1(s1,ios::trunc),f2(s2,ios::trunc);
	int xx=19;
	while(xx--){
		k=rand()%3000+5000;
		t=rand()%3000+5000;
		ll safe[10005]={0};
		f1<<n<<" "<<k<<" "<<t<<'\n';
		
		for(int i=1;i<=n;++i){
			int x=rand()%3000+5000;
			f1<<x<<" ";
			safe[i]=x;
		}f1<<'\n';
		for(int i=1;i<=k;++i){
			a=rand()%5000+1;
			b=rand()%3000-1000;
			f1<<a<<" "<<b<<'\n';
			safe[a]+=b;
			if(safe[a]<0)safe[a]=0;
		}
		f1<<'\n';
		while(t--){
			a=rand()%n+1;
			f1<<a<<" ";
			f2<<safe[a]<<" ";
		}
		f1<<'\n';
		f2<<'\n';
				
	}
	k=99999;
	t=1;
	ll safe[10005]={0};
	f1<<n<<" "<<k<<" "<<t<<'\n';
	for(int i=1;i<=n;++i){
		int x=99999;
		f1<<x<<" ";
		safe[i]=x;
	}
	for(int i=1;i<=k;++i){
		a=1;
		b=99999;
		f1<<a<<" "<<b<<'\n';
		safe[a]+=b;
	}
	while(t--){
		a=1;
		f1<<a<<" ";
		f2<<safe[a]<<" ";
	}
	f1<<'\n';
	f2<<'\n';	
	
	f1<<-1<<" "<<-1<<" "<<-1<<'\n';
	
}

