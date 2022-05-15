#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[100],n,tmp;
	
	cin >>n;
	for(int i=0;i<n;++i)arr[i]=i+1;
	random_shuffle(arr,arr+n);
	for(int i=0;i<n;++i)cout<<arr[i]<<" ";
	cout<<'\n';


	for(int i=0,j,tmp;i<n-1;i++){
		tmp=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[tmp]){
				tmp=j;
			}
		}
		if(tmp!=i)swap(arr[tmp],arr[i]);
		
	}
	for(int i=0;i<n;++i)cout<<arr[i]<<" ";
	cout<<'\n';	
	
}
