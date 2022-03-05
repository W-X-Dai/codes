#include<bits/stdc++.h>
using namespace std;

int n,x,y;
int arr[26][17],suc[26]={0};

void mk(int x){
	for(int i=0;i<n;i++){
		for(int j=1;j<=16;j++){
			if(arr[i][j]==x)
				arr[i][j]=0;
		}	
	}
}

void det(int x){
	int p;
	for(int i=0;i<n;i++){
		suc[i]=1;
		for(int j=x;j<x+12;j+=4){
			if(!arr[i][j]){
				suc[i]=0;
				break;
			}
		}suc[i]=1;
		for(int j=y;j<y+4;j++){
			if(arr[i][j]){
				suc[i]=0;
				break;
			}
		}
		if((x+y)%5)break;
		suc[i]=1;
		for(int j=0;j<16;j+=5){
			if(arr[i][j]){
				suc[i]=0;
				break;
			}
		}
		if((x+y)%3)break;
		suc[i]=1;
		for(int j=3;j<13;j+=3){
			if(arr[i][j]){
				suc[i]=0;
				break;
			}
		}
	}
}

void func(int n){
	int i;
	for(i=0;i<=;i++){
		if(arr[i]==n)break;
	}
	x=i;
	while(x>3)x-=4;
	y=i;
	while(y%4)y--;
}


int main(){
	char a;
	int x1,i,j;
	
	cin >>n>>n;
	for(i=0;i<n;i++){
		for(j=0;j<17;j++)
			cin >>arr[i][j];
	}
	cin >>i;
	for(i=0;i<16;i++){
		cin >>x1;
		mk(x1);
		det(x1);
		for(i=0;i<n;i++){
			if(suc[i]){
				a=arr[i][0];
				cout<<a<<'\n';
			}
		}
	}
}

