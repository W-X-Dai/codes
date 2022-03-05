#include<bits/stdc++.h>
using namespace std;

int func(int a){
	int i,ans;
	for(i=1;i<=a;i++){
		ans*=i;
	}
	return ans;
}

int main(){
	int a;
	cin >>a;
	cout<<func(a)<<'\n';
}

