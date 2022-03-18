#include<bits/stdc++.h>
using namespace std;

int arr[11][11];
int arr1[11][11];

int sum(int r,int c){
	int ans=0;
	ans+=arr[r-1][c];
	ans+=arr[r][c-1];
	ans+=arr[r+1][c];
	ans+=arr[r][c+1];
	return ans;
}

int tot(int r,int c){
	int ans=0;
	if(arr[r-1][c]!=0)ans++;
	if(arr[r][c-1]!=0)ans++;
	if(arr[r+1][c]!=0)ans++;
	if(arr[r][c+1]!=0)ans++;
	return ans;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int r,c,i,j;
	
	cin >>r>>c;
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++)
			cin >>arr[i][j];
	}
	
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(arr[i][j]==0){
				if(tot(i,j)!=0)
					arr1[i][j]+=sum(i,j)/tot(i,j);
			}
		}
	}
	
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(arr[i][j]!=0)cout<<arr[i][j]<<" ";
			else cout<<arr1[i][j]<<" ";
		}
		cout<<'\n';
	}
}

