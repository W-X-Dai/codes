#include<bits/stdc++.h>
#define ll long long
#define MXN 5005

using namespace std;

string s1,s2,p,e;
ll psw[MXN],etr[MXN];
ll ori[MXN],num[MXN],in[MXN],out[MXN],det[MXN];

int M,N,K;

void pssw();
void give_value();

int main(){
	srand(time(NULL));
	for(int i=6;i<=9;++i){
		
		int n;
		s1.clear(),s2.clear();
		
		char tmp=i+48;
		s1="safe_1";s1+=tmp;s1+=".in";
		s2="safe_1";s2+=tmp;s2+=".out";			
		
		M=rand()%3500+1500,N=rand()%50+150;//N=0;
		cout<<M<<" "<<N<<'\n';
		give_value();
	}
	
}

void give_value(){
	ofstream f1,f2;
	f1.open(s1,ios::trunc),f2.open(s2,ios::trunc);
	
	f1<<M<<" "<<N<<'\n';
	for(int i=1;i<=M;++i){
		psw[i]=rand()%10000+1000;
	}
	
	for(int i=1;i<=M;++i)f1<<psw[i]<<" ";
	f1<<'\n';
	
	for(int i=1;i<=M;++i){
		ori[i]=rand()%500;
		f1<<ori[i]<<" ";
	}
	f1<<'\n';
	for(int i=1;i<=N;++i){
		num[i]=rand()%M+1;
		f1<<num[i]<<" ";
	}
	f1<<'\n';
	for(int i=1;i<=N;++i){
		in[i]=rand()%5000;
		f1<<in[i]<<" ";
	}
	f1<<'\n';
	for(int i=1;i<=N;++i){
		out[i]=rand()%5000;
		f1<<out[i]<<" ";
	}
	f1<<'\n';
	
	for(int i=1;i<=N;++i){
		int x=num[i];
		if(rand()%2)etr[i]=psw[x];
		else etr[i]=rand()%9000+1000;//etr[i]=psw[x];
		f1<<etr[i]<<" ";
	}
	f1<<'\n';
	
	K=rand()%200+300;
	f1<<K<<'\n';
	for(int i=1;i<=K;++i){
		det[i]=rand()%M+1;
		f1<<det[i]<<" ";
	}
	f1<<'\n';
		
	for(int i=1;i<=N;++i){
		int x=num[i];
		if(psw[x]==etr[i]){
			ori[x]+= in[i];
			ori[x]-=out[i];
			if(ori[x]<0)ori[x]=0;
		}
	}
	for(int i=1;i<=K;++i){
		int x=det[i];
		f2<<ori[x]<<" ";
	}
	f2<<'\n';		
		
		
}
