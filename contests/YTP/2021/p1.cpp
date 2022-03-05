#include<bits/stdc++.h>
using namespace std;
int main(){
	char x;
	int arr[3]={0};

	while(cin >>x){
		if(x=='Y' or x=='y')arr[0]++;
		if(x=='T' or x=='t')arr[1]++;
		if(x=='P' or x=='p')arr[2]++;
	}
	
	sort(arr,arr+3);
	cout<<arr[0]<<'\n';
	
}

