#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int arr1[50050],arr2[50050]={0};
	int n,i,x=0,b,e;
	
	cin >>n;
	for(i=0;i<n;i++)cin >>arr1[i];
	
	for(i=0;i<n;i++){
		b=i;
		e=arr1[b];
		while(true){
			e=arr1[e];
			arr2[e]++;
			
			if(b==e){
				x++;
				break;
			}
		
		}
		
		while(arr2[i]) i++;
	}
	cout<<x<<'\n';
}

