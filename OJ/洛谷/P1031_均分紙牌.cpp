#include<bits/stdc++.h>
using namespace std;

int n,arr[105];
int cnt,mid,ans;

int main(){
	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i],cnt+=arr[i];
	mid=cnt/n;
	
	for(int i=0;i<n;++i){
		if(arr[i]-mid)arr[i+1]+=arr[i]-mid,++ans;
	}

	cout<<ans<<'\n';
	return 0;
}