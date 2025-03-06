#include<bits/stdc++.h>
using namespace std;

int n,l,r,cnt;
int arr[55];

int main(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i],cnt+=arr[i];
	cin >>l>>r;

	if(cnt<l*n or cnt>r*n){
		cout<<"-1\n";
		return 0;
	}
	int more=0,less=0;
	for(int i=0;i<n;++i){
		if(arr[i]<l)less+=l-arr[i];
		if(arr[i]>r)more+=arr[i]-r;
	}
	cout<<max(less,more)<<'\n';
	return 0;
}