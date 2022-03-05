#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[6][5]=
	{{86, 92, 57, 81, 65},{96, 98, 81, 67, 74},
	 {91, 40, 92, 78, 67},{68, 88, 50, 89, 78},
	 {87, 96, 70, 62, 68},{84, 75, 94, 56, 90}};
	int x,y;
	
	cin >>x>>y;
	cout<<arr[y-1][x-1]<<'\n';
	
	
}

