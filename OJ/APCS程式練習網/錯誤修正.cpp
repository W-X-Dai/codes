#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[100][100];
	int n,x,y,i,j,stop=0,ok=1;
	
	while(cin >>n){
		int wx[2]={0};
		int wy[2]={0};
		stop=0,ok=1;
		
		if(!n)break;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				cin >>arr[i][j];
			}
		}
		
		
		for(i=0;i<n;i++){
			x=0,y=0;
			for(j=0;j<n;j++){
				x+=arr[i][j];
			}
			if(x%2){
				ok=0;
				if(!wx[1]){
					wx[0]=i+1,wx[1]=1;
				}else{
					stop=1;
					break;
				}
			}
		}
		
		for(j=0;j<n;j++){
			x=0,y=0;
			if(stop) break;
			for(i=0;i<n;i++){
				y+=arr[i][j];
			}
			if(y%2){
				ok=0;
				if(!wy[1]){
					wy[0]=j+1,wy[1]=1;
				}else{
					stop=1;
					break;
				}
			}
		}		
		if(ok)cout<<"OK"<<'\n';
		else if(stop)cout<<"Corrupt"<<'\n';
		else cout<<"Change bit ("<<wx[0]<<","<<wy[0]<<")"<<'\n';
	}
}

