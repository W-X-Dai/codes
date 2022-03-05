#include<bits/stdc++.h>
using namespace std;
void TenToTwo(int x){
	int arr[20],i=0;
	while(x!=0){
		arr[i]=x%2;
		x/=2;
		i++;
	}
	for(--i;i>=0;i--)cout<<arr[i];
	cout<<'\n';
	return;
}

int TwoToTen(int x){
	int n=1,m=0,ans=0;
	int arr[10000];
	while(n<=x)n*=10,m++;
	n=m;
	for(int i=0;i<m;i++){
		arr[i]=x%10;
		x/=10;
	}
	for(int i=0;i<m;i++)ans+=arr[i]*pow(2,i);
	cout<<ans<<'\n';
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int mode;
 	int x;
	 	
	cin >>mode>>x;
	if(mode-1)TwoToTen(x);
	else TenToTwo(x);
	
}

