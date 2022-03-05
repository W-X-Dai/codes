#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,a,b,arr[7][7]={0};
	int ans=0;
	
	cin >>n;
	for(int i=0;i<n;i++){
		cin >>a>>b;
		arr[b+1][a+1]=1;
	}
	
	/*for(int i=1;i<6;i++){
		for(int j=1;j<6;j++)
			cout<<arr[j][i]<<" ";
		cout<<'\n';
	}*/
	
	cin >>a>>b;
	a++,b++;
	if(arr[a-1][b-1])ans++;
	if(arr[a+1][b+1])ans++;
	if(arr[a][b-1])ans++;
	if(arr[a][b+1])ans++;
	if(arr[a-1][b])ans++;
	if(arr[a+1][b])ans++;
	if(arr[a-1][b+1])ans++;
	if(arr[a+1][b-1])ans++;
	
	cout<<ans<<'\n';
}

