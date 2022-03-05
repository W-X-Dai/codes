#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,h=-1,l=101,m;
	int arr[150];
	
	cin >>n;
	for(i=0;i<n;i++){
		cin >>arr[i];
		if(arr[i]>=60 && arr[i]<l)l=arr[i];
		if(arr[i]<60 && arr[i]>h)h=arr[i];
	}
	
	sort(arr,arr+n);
	
	for(i=0;i<n;i++)cout<<arr[i]<<" ";
	if(h!=-1)cout<<'\n'<<h;
	else cout<<'\n'<<"best case";
	if(l!=101)cout<<'\n'<<l;
	else cout<<'\n'<<"worst case";
	cout<<'\n';
	

	return 0;
	
}
