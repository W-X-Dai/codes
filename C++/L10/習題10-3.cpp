#include<bits/stdc++.h>
using namespace std;

int power(int a,int b){
	int i,ans=1;
	
	for(i=0;i<b;i++){
		ans*=a;
	}
	return ans;
	
}

int main(){
	int a,b;
	cin >>a>>b;
	cout<<power(a,b);
}

