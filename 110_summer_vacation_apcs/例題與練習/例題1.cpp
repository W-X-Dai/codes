#include<iostream>
using namespace std;
int main(){
	int arr[10],n,i;
	cin >>n;
	
	for(i=0;i<n;i++){
		cin >>arr[i];
	}
	
	for(i=n-1;i>=0;i--){
		cout<<arr[i]<<" ";
	}
	
	
}

