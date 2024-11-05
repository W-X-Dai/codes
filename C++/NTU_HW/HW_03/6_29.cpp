#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
	
	cin >>n;
	//1 isn't prime
	if(n==1){
		cout<<n<<" isn't prime.\n";
		return 0;		
	}
	//if n isn't prime, stop the loop
	for(int i=2;i*i<=n;++i){
		if(n%i==0){
			cout<<n<<" isn't prime.\n";
			return 0;
		}
	}
	cout<<n<<" is prime.\n";
	return 0;
}