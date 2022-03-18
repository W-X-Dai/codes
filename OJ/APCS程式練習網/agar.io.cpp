#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[10005][10005];
	bool exist[10005]={0};
	int ma=0,n,m,i,a,b,arr1[10005]={0};
	
	for(i=0;i<10005;i++)arr[i][0]=1;
	
	cin >>n>>m;
	for(i=1;i<=n;i++){
		exist[i]=1;
	}
	for(i=0;i<m;i++){
		cin >>a>>b;
		if(exist[a]*exist[b]){
			if(a>=b){
				arr[a][arr[a][0]]=b;
				arr[a][0]++;
				exist[b]=0;
				arr1[a]++;
				if(arr1[a]>arr1[ma])ma=a;
			}
			else{
				arr[b][arr[b][0]]=a;
				arr[b][0]++;
				exist[a]=0;
				arr1[b]++;
				if(arr1[b]>arr1[ma])ma=b;
			}		
		}

	}
//	a=v[ma].begin(),b=v[ma].end();
	sort(v[ma].begin(),v[ma].end());
	cout<<ma<<'\n';
	for(auto i:v[ma])cout<<v[ma][i]<<" ";
	cout<<'\n';
	
}

