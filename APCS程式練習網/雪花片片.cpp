#include<bits/stdc++.h>
using namespace std;

int op[75];

void power(int n){
	
	for(int i=0;i<n;i++){
		int next=0;
		for(int j=0;j<75;j++){
			op[j]*=4;
			op[j]+=next;
			next=op[j]/10;
			op[j]%=10;
		}
	}
	
}

void divid(){
	int next=0;
	for(int i=74;i>=0;i--){
		op[i]+=next*10;
		next=op[i]%3;
		op[i]/=3;
	}
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >>n;
	op[0]=1;
	
	power(n);
	
	for(int i=74;i>=0;i--){
		if(op[i])cout<<op[i];
	}
	cout<<'\n';
	
	op[0]-=1;
	
	divid();
	
	for(int i=74;i>=0;i--){
		if(op[i])cout<<op[i];
	}
	cout<<'\n';
}

