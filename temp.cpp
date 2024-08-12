#include<bits/stdc++.h>
using namespace std;



int main(){
	int n,arr[10005],q;
	
	cin >>n>>q;
	for(int i=1;i<=n;++i){
		cin >>arr[i];
	}
	while(q--){
		int x;
		cin >>x;
		cout<<arr[x]<<'\n';
	}

}


