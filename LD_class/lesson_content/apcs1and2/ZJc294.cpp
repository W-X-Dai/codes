#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
//	ios::sync_with_stdio(0),cin.tie(0);
	int arr[3];
	for(int i=0;i<3;++i)cin >>arr[i];
	sort(arr,arr+3);
	for(int i=0;i<3;++i)cout<<arr[i]<<" ";cout<<'\n';
	
	int a=arr[0],b=arr[1],c=arr[2];	
	if(a+b<=c)cout<<"No\n";
	else if(a*a+b*b<c*c)cout<<"Obtuse\n";
	else if(a*a+b*b==c*c)cout<<"Right\n";
	else cout<<"Acute\n";
	
}

