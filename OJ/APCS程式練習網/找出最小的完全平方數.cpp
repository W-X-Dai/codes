#include<bits/stdc++.h>
using namespace std;

int len(int x){
	int i,j=0;
	for(i=1;i<x+1;i*=10)j+=1;
	return j;
}

bool func(int x,int l){
	int i;
	for(i=0;i<l;i++){
		if(x%2)return 0;		
		x/=10;
	}
	return 1;
}

int main(){
	int n=1,i,j,ii=0;
	int x;
	
	cin >>n;
	while(ii<n){
		cin >>x;
		for(j=1;len(j*j)<x;j++);
		i=j*j;
		
		while(1){
			if(func(i,x))break;
			j++;
			i=j*j;
		}
		cout<<i<<'\n';	
		ii++;	
	}

}

