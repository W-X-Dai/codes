#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000005];
int main(){
	
	int i,j,a,b,n,k;
	cin >>n>>k;
	int arr[n];
	
	for(i=0;i<k;i++){
		cin >>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	for(int i=1;i<=n;++i){
		sort(v[i].begin(),v[i].end());
		for(int a:v[i]){
			cout<<a;
			if(a!=*(v[i].end()-1))cout<<" ";
		}
		cout<<'\n';
	}
	
}
