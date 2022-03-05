#include<bits/stdc++.h>
using namespace std;

int n,m,x,arr[1000005];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>x;
		arr[x]++;
	}
	cin >>m;
	for(int i=0;i<m;i++){
		cin >>x;
		cout<<arr[x]<<'\n';
	}
}

