#include<bits/stdc++.h>
using namespace std;

int arr[5000];

int main(){
	int i,n;
	cin >>n;
	
	arr[0]=1;
	for(int ii=0;ii<n;ii++){
		int i,next=0;
		for(i=0;i<5000;i++){
			arr[i]*=3;
			arr[i]+=next;
			next=arr[i]/10;
			arr[i]%=10;
		}	
	}	
	
	for(i=5000;i>=0;i--){
		if(arr[i])break;
	}
	for(;i>=0;i--)cout<<arr[i];
	cout<<'\n';
}

