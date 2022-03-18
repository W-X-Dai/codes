#include<bits/stdc++.h>
#define ll long long
#define MXN 100005
using namespace std;
int main(){
	int n;
	
	cin >>n;
	for(int i=0;i<n;i++){
		int err[3]={0};
		int arr1[7],arr2[7];
		for(int j=0;j<7;j++){
			cin >>arr1[j];
		}	
		for(int j=0;j<7;j++){
			cin >>arr2[j];
		}
		if(arr1[1]==arr1[3])err[0]=1;
		if(arr1[1]!=arr1[5])err[0]=1;
		if(arr2[1]==arr2[3])err[0]=1;
		if(arr2[1]!=arr2[5])err[0]=1;
		
		if(arr1[6]==0 or arr2[6]==1)err[1]=1;
		
		if(arr1[1]==arr2[1])err[2]=1;
		if(arr1[3]==arr2[3])err[2]=1;
		if(arr1[5]==arr2[5])err[2]=1;
		
		if(err[0])cout<<"A";
		if(err[1])cout<<"B";
		if(err[2])cout<<"C";
		
		if(err[0]+err[1]+err[2]==0){
			cout<<"None";
		}
		cout<<'\n';
	}
	
	
	
}

