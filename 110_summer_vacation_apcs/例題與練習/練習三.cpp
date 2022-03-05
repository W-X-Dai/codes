#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n,k,arr[10000],i,x=0;
	
	cin >>n;
	for(i=0;i<n;i++) cin >>arr[i];
	
	cin >>k;
	for(i=0;i<n;i++){
		if(arr[i]==k) x++;
	}
	cout<<x<<'\n';
	
}

