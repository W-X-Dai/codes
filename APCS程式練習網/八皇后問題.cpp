#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;

ll mp[9][9],arr[9][9],ans,q,mxn;

void block(int a,int b){
	for(int i=1;i<9;i++)arr[a][i]=1;
	for(int i=1;i<9;i++)arr[i][b]=1;
	for(int i=a,j=b;i>0 && j>0;i--,j--)arr[i][j]=1;
	for(int i=a,j=b;i<9 && j<9;i++,j++)arr[i][j]=1;
}

void fill(int a,int b){
	
	if(arr[a][b]==1) return;
	cout<<a<<b<<'\n';
	ans+=mp[a][b];++q;
	if(arr[a][b]==0)block(a,b);
	
	for(int i=1;i<=8;i++){ 
		for(int j=1;j<=8;j++)
			cout<<arr[i][j];
		cout<<'\n';
	} 
	for(int i=1;i<9;i++){
		fill(a+1,i);
	}
//	cout<<ans<<'\n';
}

int main(){
	int k;
	 
	cin >>k;
	while(k--){
		for(int i=1;i<=8;i++)
		for(int j=1;j<=8;j++)
			cin >>mp[i][j];
		

		for(int i=1;i<9;i++){
			ans=0;q=0;
			memset(arr,0,sizeof(arr));
			fill(1,i);
			if(q==8)mxn=max(ans,mxn);
		}
		cout<<mxn<<'\n';
		
	}
	
}

