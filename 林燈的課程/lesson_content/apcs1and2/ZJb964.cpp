#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,f=-1,p=-1,arr[100];
	
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
	sort(arr,arr+n);
	
	for(int i=0;i<n;++i){
		if(arr[i]<60)f=arr[i];
		else{p=arr[i];break;}
	}
	cout<<arr[0];
	for(int i=1;i<n;++i)cout<<" "<<arr[i];
	cout<<'\n';
	
	if(f!=-1)cout<<f<<'\n';
	else cout<<"best case\n";
	if(p!=-1)cout<<p<<'\n';
	else cout<<"worst case\n";

}

