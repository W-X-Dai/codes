#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[50005],vis[50005]={0};
	int n,i,a,b,t=0;
	
	cin >>n;
	for(i=0;i<n;i++)cin >>arr[i];
	
	for(i=0;i<n;i++){
		if(vis[i]==0){
			a=arr[i],b=arr[a];
			while(a!=b){
				b=arr[b];
				vis[b]=1;
			}
			b=arr[b];
			vis[b]=1;			
			t++;
		}
	
		
	}
	cout<<t<<'\n';
}

