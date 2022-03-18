#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int arr[200050];
	int n,t,i,l,r,ok=1;
	
	cin>>n;
	for(int i=1;i<=n;i++) cin>>arr[i];
	
	cin>>t;
	for(i=0;i<t;i++){
		cin>>l>>r;
		if(abs(l-r)>8){
			ok=0;
			break;
		}
		swap(arr[l],arr[r]);
	}

	if(ok) cout<<"SORTED!\n";
	else cout<<"I QUIT!\n";
	
	for(int i=1;i<=n;i++){
		cout<<arr[i];
		if(i<n) cout<<" ";
		else cout<<'\n';
	}
}
