#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,a,b,ans;
	cin >>n;
	for(int ii=0;ii<n;ii++){
		cin >>m;
		ans=0;
		vector<int> arr[10005];
		for(i=0;i<m;i++){
}			cin >>a>>b;
			if(arr[b][a]){
				ans++;
				arr[b][a]=0;
				arr[a][b]=0;
			}
			else arr[b][a]=1;
		}
		cout<<ans<<'\n';
	
}

