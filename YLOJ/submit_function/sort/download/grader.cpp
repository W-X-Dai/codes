#include "sort.h"
#include<iostream>

static int n;
static int arr[100005];

int main(){
	std::cin >>n;
	for(int i=0;i<n;++i){
		std::cin >>arr[i];
	}
	sort(arr);
	for(int i=0;i<n;++i){
		std::cout<<arr[i]<<" \n"[i==n-1];
	}

	return 0;
}