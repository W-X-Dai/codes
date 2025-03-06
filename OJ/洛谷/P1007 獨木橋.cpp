#include<bits/stdc++.h>
using namespace std;

int n,l,arr[5005];


int main(){
	cin >>l>>n;
	for(int i=0;i<n;++i)cin >>arr[i];

	if(!n){
		cout<<"0 0\n";
		return 0;
	}

	sort(arr,arr+n);
	int mi=0;
	for(int i=0;i<n;++i){
		mi=max(mi,min(arr[i],l+1-arr[i]));
	}
	cout<<mi<<" "<<max(arr[n-1],l+1-arr[0])<<'\n';
}