#include<bits/stdc++.h>
#define ll long long

using namespace std;
int main(){
	ll l,r;
	int arr[10005]={0};
	int pre[10005]={0};
	
	for(int i=1;i<=10;i++){
		arr[i]=1;
		for(int j=2;j*j<=i;j++){
			if(i%j==0)arr[i]+=i-j;
		}
		pre[i]=arr[i]+pre[i-1]; 
		cout<<pre[i]<<'\n';
	}
	
	cin >>l>>r;
	cout<<pre[r]-pre[l-1]<<'\n'; 
	
}

