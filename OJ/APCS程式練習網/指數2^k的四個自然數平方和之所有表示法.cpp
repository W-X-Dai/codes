#include<bits/stdc++.h>
using namespace std;

int sq[65536],num[4];
bool sol;

void pick(int remain,int id){
	if(id==3){
		int r=sqrt(remain);
		if(r*r==remain){
			num[3]=r;
			sol=1;
		}
		return;
	}
	int l,u;
	
	if(!id)l=1;
	else l=num[id-1];
	u=sqrt(remain/(4-id));
	
	for(int i=l;i<=u;i++){
		num[id]=i;
		pick(remain-sq[i],id+1);
	}
}


int main(){
	int n=1,i;
	for(i=1;i<=65536;i++)sq[i]=i*i;
	int k;
	cin >>k;
	
	for(i=0;i<k;i++)n*=2;
	
	sol=0;
	pick(n,0);
	
	if(sol){
		for(i=0;i<4;i++)cout<<num[i]<<" ";
	}else cout<<0;
	
	cout<<'\n';
}

