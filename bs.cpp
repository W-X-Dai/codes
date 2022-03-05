#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,r,mid;
	int n,i,x;
	int arr[10];
	
	cin >>x>>n;
	for(i=0;i<n;i++){
		cin >>arr[i];
	}
	l=0;r=n-1;
	while(l<=r){
		mid=(l+r)/2;
		cout<<l<<" "<<r<<" "<<mid<<'\n';
		
		if(arr[mid]<x)l=mid+1;
		else r=mid-1;
	}
	
	cout<<l<<" "<<r<<'\n';
}

