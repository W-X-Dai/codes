#include<bits/stdc++.h>
using namespace std;

int arr[50050];
int t,n,i,x;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
    
    cin >>t;
    for(i=0;i<t;i++){
    	int arr1[2147483647]={0};

    	cin >>n;
    	for(int j=0;j<n;j++)cin >>arr[i];		
		for(int j=0;j<n;j++){
			if(arr1[i]==0){
				cout<<arr[i]<<" ";
				arr1[i]=1;
			}
		}
		cout<<'\n';
    	
	}
    
    
    
    return 0;
    
}
