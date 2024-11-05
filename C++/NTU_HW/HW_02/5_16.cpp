#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[5];
	//read the five numbers
	for(int i=0;i<5;++i)cin >>arr[i];

	for(int i=0;i<5;++i){
		//each number have two lines
		for(int ii=0;ii<2;++ii)
			//jump to the next line in the end of current line
			for(int j=0;j<arr[i];++j)cout<<arr[i]<<"\0\n"[j==arr[i]-1];
	}
}