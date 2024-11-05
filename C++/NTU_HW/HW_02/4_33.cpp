#include<bits/stdc++.h>
using namespace std;

int main(){
	double arr[3];

	//read three numbers
	for(int i=0;i<3;++i)cin >>arr[i];
	//sort the numbers to find the maximum
	sort(arr,arr+3);

	//determine if the sum of the two little edges is larger than the big edge 
	cout<<((arr[0]+arr[1]<=arr[2]) ? "NO\n" : "YES\n");
	
	return 0;
}