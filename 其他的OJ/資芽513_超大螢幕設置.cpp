#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,m,x,area,ma=0;
	int arr[2000050];
	stack<int>st;
	
	cin >>n;
	for(i=0;i<n;i++)cin >>arr[i];
	for(i=0;i<n;i++){
		m=arr[i];
		area=0;
		for(j=0;j<n;j++){
			if(arr[j]>=m){
				area+=m;	
				if(area>ma)ma=area;
				cout<<arr[j]<<" "<<ma<<" "<<area<<'\n';
			}
			else area=0; 
		}
	}
	cout<<ma<<'\n';
}

