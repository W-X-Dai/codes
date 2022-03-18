//YOJ1027_Cat
#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	
	ll n;
	int x,y=0,i=0;
	cin >>x>>n;
	ll arr[x];
	
	for(i=0;i<x;i++)cin >>arr[i],y+=arr[i];
	
	sort(arr,arr+x);
	
	i=0;
	while(y>n){
		y-=arr[i];
		i++;
	}
	cout<<y<<'\n';
	
	
	
return 0;
}
