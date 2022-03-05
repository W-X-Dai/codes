#include<bits/stdc++.h>
using namespace std;

int arr[500][500];
int n,m,t,ans;
int i,j;
int x1,y1,x2,y2;

int main(){
	cin >>n>>m>>t;
	
	for(int ii=0;ii<t;ii++){
		cin >>x1>>y1>>x2>>y2;
		x1--,x2--,y1--,y2--;	
		if(x1==x2){
			cout<<"s1"<<'\n';
			for(i=y1;i<=y2;i++){
				arr[x1][i]=1;
			}
		}else if(y1==y2){
			cout<<"s2"<<'\n';
			for(i=x1;i<=x2;i++){
				arr[i][y1]=1;
			}
		}else if(x1>x2 and y1>y2){
			cout<<"s3"<<'\n';
			for(i=x2,j=y2;i<=x1;i++,j++){
				arr[i][j]=1;
			}
		}else if(x1<x2 and y1>y2){
			cout<<"s4"<<'\n';
			for(i=x1,j=y2;i<=x2;i++,j++){
				arr[i][j]=1;
			}
		}else if(x1>x2 and y1<y2){
			cout<<"s5"<<'\n';
			for(i=x2,j=y1;i<=x1;i++,j++){
				arr[i][j]=1;
			}
		}else if(x1<x2 and y1<y2){
			cout<<"s6"<<'\n';
			for(i=x1,j=y1;i<=x1;i++,j++){
				arr[i][j]=1;
			}
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			ans+=arr[i][j];
		}
	}
	cout<<ans<<'\n';
}

