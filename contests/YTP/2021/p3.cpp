#include<bits/stdc++.h>
using namespace std;

int n,a,b,ans;
int arr[1000005];

int main(){
	ans=1;
	cin >>n;
	cin >>a;
	for(int i=1;i<n;i++){
		cin >>b;
		arr[i]=b-a;
		a=b;
		ans*=arr[i];
	}
	cout<<ans<<'\n';
}

