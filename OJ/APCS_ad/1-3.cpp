#include<bits/stdc++.h>
using namespace std;

int n,arr[90];

inline void show(){
	int i=80;
	for(i=80;i>0;--i){
		if(arr[i])break;
	}
	for(;i>0;--i)cout<<arr[i];
	cout<<'\n';
}

inline void power(int x){
	arr[1]=1;
	while(x--){
		for(int i=1;i<=75;++i){
			arr[i]*=4;
		}
		for(int i=1;i<=75;++i){
			arr[i+1]+=arr[i]/10;
			arr[i]%=10;
		}
	}
	--arr[1];
}

inline void divid(){
	for(int i=75;i>0;--i){
		if(!arr[i]%3)arr[i]/=3;
		else {
			arr[i-1]+=10*(arr[i]%3);
			arr[i]/=3;
		}
	}
}


int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	cin >>n;
	power(n);
	divid();
	show();
}