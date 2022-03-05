#include<bits/stdc++.h>
using namespace std;

int n,t;
void num(){
	cout<<"2"<<'\n';
	if(n==2){
		cout<<"1"<<" "<<"2"<<'\n';
		return;
	}
    cout<<n-2<<" "<<n<<'\n';
    cout<<n-1<<" "<<n-1<<'\n';
    for(int i=n-3;i>=1;i--)cout<<i<<" "<<i+2<<'\n';
}

int main(){
	cin>>t;
	while(t--){
		cin>>n;
		num();
	}
 } 