#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;

void add(ll a,ll b);
void min(ll a,ll b);
void mul(ll a,ll b);
void divi(ll a,ll b);

int main(){
	ll n,a,b;char op;
	cin >>n;
	for(int i=0;i<n;++i){
		cin >>a>>op>>b;
		if(op=='+')add(a,b);
		if(op=='-')min(a,b);
		if(op=='*')mul(a,b);
		if(op=='/')divi(a,b);
	}

}

void add(ll a,ll b){
	cout<<a+b<<'\n';
}
void min(ll a,ll b){
	cout<<a-b<<'\n';
}
void mul(ll a,ll b){
	cout<<a*b<<'\n';
}
void divi(ll a,ll b){
	cout<<a/b<<'\n';
}

