#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;
int main(){
	int arr[1000];
	int x,y,n;
	
	arr[1]=1,arr[2]=2;
	cin >>n>>x>>y;
	for(int i=3;i<=n;++i){
		arr[i]=(arr[i-1]*x+arr[i-2]*y)%100000000;
	}
	cout<<arr[n];
}

