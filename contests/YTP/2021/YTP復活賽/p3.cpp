#include<bits/stdc++.h>
using namespace std;

int n,arr[1000005], pos[1000005],ans;

int main(){
	cin >>n;
	for(int i=1;i<=n;i++){
		cin >>arr[i];
	}
	for(int i=1;i<=n;i++){
		pos[arr[i]] = i;
	
	}
	for(int i=1;i<=n;i++){
		if(arr[i]!=i){
			arr[pos[i]] = arr[i];
			pos[arr[i]] = pos[i];
			ans++;
		}

	}
	cout<<ans<<'\n';
}
