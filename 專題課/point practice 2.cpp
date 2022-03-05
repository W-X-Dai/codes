#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int i,arr[5]={1,2,3,4,5};
	int *p=nullptr;
	
	cout<<"start:"<<arr<<'\n';
	cout<<"p address:"<<&p<<'\n';
	
	p=arr;
	cout<<"p value:"<<*(p+4)<<'\n';
	
	for(i=0;i<5;i++)cout<<*++p<<" ";
	
	
	
}

