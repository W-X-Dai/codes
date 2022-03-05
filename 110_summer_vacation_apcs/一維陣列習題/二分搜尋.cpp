#include<bits/stdc++.h>
using namespace std;

int arr[1005],t=0;

int bs(int l,int r,int x){
	if(r<l)return -1;
	int n=l+(r-l)/2;
	t++;
	if(x==arr[n])return n;
	else if(arr[n]<x)bs(n+1,r,x);
	else return bs(l,n-1,x);
}


int main(){
	int n,i,x;
	
	cin >>n;
	for(i=0;i<n;i++){
		cin >>arr[i];
	}
	cin >>x;
	n=bs(0,n-1,x);
	if(n==-1)cout<<"not found "<<t<<'\n';
	else cout<<n<<" "<<t<<'\n';
	
	
}

