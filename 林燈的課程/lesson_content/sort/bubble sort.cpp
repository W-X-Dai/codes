#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[50],n=50;
	for(int i=0;i<50;++i)cin >>arr[i];
	
	for(int i=0;i<n;++i){
		for(int j=0;j<n-1-i;++j){
			if(arr[j]>arr[j+1])
				swap(arr[j],arr[j+1]);
		}
	}	
	cout<<'\n';
	for(int i=0;i<50;++i)cout<<arr[i]<<" ";
	
}
