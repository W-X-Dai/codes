#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	long long n,k,i,t=0,ans=0;
	int arr[1000050][2];
	int dif[1000050];
	
	cin >>n>>k;
	for(i=0;i<n;i++)cin >>arr[i][0];//bad
	for(i=0;i<n;i++)cin >>arr[i][1],t+=arr[i][1];//normal
	for(i=0;i<n;i++)dif[i]=arr[i][1]-arr[i][0];
	sort(dif,dif+n);
	
	for(i=0;i<n;i++){
		t-=dif[i];
		if(t>=k)ans++; 
	}
	cout<<ans<<'\n';
}

