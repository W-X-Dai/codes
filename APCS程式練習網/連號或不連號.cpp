#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[105],i,n,yes,a,b;
	
	while(cin >>n){
		yes=0;
		for(i=0;i<n;i++)cin >>arr[i];
		sort(arr,arr+n);
		
		a=arr[0],b=arr[n-1];

		for(i=0;i<n-1;i++){

			if(arr[i+1]==arr[i]+1)yes=1;
			else{
				yes=0;
				break;
			}
		}
		cout<<a<<" "<<b<<" ";
		if(yes)cout<<"yes"<<'\n';
		else cout<<"no"<<'\n';
	}
	
}

