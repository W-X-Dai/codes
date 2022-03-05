#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,x,arr[100];
	a=-1,b=-1;
	
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>arr[i];
	}
	sort(arr,arr+n);
	
	for(int i=0;i<n;i++){
		if(arr[i]<60)a=arr[i];
		else {
			b=arr[i];
			break;
		}
	}
	for(int i=0;i<n;i++)cout<<arr[i]<<" ";
	cout<<'\n';
	if(a!=-1)cout<<a<<'\n';
	else cout<<"best case\n";
	
	if(b!=-1)cout<<b<<'\n';
	else cout<<"worst case\n";
	
}

