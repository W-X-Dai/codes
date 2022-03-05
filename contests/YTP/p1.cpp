#include<bits/stdc++.h>
using namespace std;

int main(){
	bool p[5005]={0};p[1]=1;
	int i,j,n,x;
	
	cin >>n;
	for(i=1;i<=n;i++){
		for(j=2;j<=sqrt(i);j++){
		//	cout<<i<<" "<<j<<'\n';
			if(i%j==0)p[i]=1;
		}
	}
	for(i=n;i>0;i--){
		if(p[i]==p[n])cout<<i<<" ";
	}
	cout<<'\n';
}

