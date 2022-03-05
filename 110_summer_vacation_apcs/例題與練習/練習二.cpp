#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr[99]={0};
	int n,a,b,i;
	
	cin >>n;
	for(i=0;i<n;i++){
		cin >>a>>b;
		arr[a-1]+=b;
	}
	
	for(i=0;i<99;i++){
		cout<<arr[i]<<" ";
	}
	cout<<'\n';
}

