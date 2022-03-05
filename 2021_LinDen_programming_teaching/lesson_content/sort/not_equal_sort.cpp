#include"bits/stdc++.h"
using namespace std;

template<class T>
T ot(T arr[]){
    int n=10;
    for(int i=0;i<n;++i){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
}

bool cmp(int a,int b){
	return a!=b;
}

int main(){
    int arr[]={1,3,5,7,9,2,4,6,8,10};
 
	random_shuffle(arr,arr+10);
	ot(arr);
	for(int i=0;i<10;++i){
		for(int j=0;j<9-i;++j){
			if(arr[j]!=arr[j+1])swap(arr[j],arr[j+1]);
		}
	}
	ot(arr);
	sort(arr,arr+10,cmp);
	ot(arr);

}
