#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[105],n,sum=0,ave,ans=0;
    
    cin >>n;
    for(int i=0;i<n;++i){
		cin >>arr[i];
		sum+=arr[i]; 
	}
	ave=sum/n;
	for(int i=0;i<n;++i){
		ans+=abs(arr[i]-ave);
	}
	cout<<ans/2<<'\n';
    
}

