#include<bits/stdc++.h>
using namespace  std;

int main(){
	int n;
	cin >>n;
	//first row of stars
	for(int i=0;i<n;++i)cout<<'*';
	cout<<'\n';

	for(int i=0;i<n-2;++i){
		for(int j=0;j<n;++j)
		//j=0 or j=n-1 is the head and the tail of the row
		//the body of the row is empty, the head and the tail of the row is star
			cout<<" *"[j==0 or j==n-1];
		cout<<'\n';
	}
	//last row
	for(int i=0;i<n;++i)cout<<'*';
	cout<<'\n';
	return 0;
}