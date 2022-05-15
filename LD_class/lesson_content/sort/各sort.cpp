#include<bits/stdc++.h>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

struct st{
	bool operator()(int a,int b){
		return a>b;
	}
}comp;

int main(){
	int arr[100005];
	int n;
	
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
	
	sort(arr,arr+n);//¤É§Ç
	sort(arr,arr+n,cmp);//­°§Ç
	sort(arr,arr+n,greater<int>());//­°§Ç
	sort(arr,arr+n,less<int>());//¤É§Ç
	sort(arr,arr+n,[](int a,int b){
		return a>b;
	});//­°§Ç
	sort(arr,arr+n,comp);//­°§Ç
	
}

