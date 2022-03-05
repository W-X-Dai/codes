#include<bits/stdc++.h>
using namespace std;

int ma=0;

void tree(int deep,int tr[]){
	if(tr[0]<=1)return;
	ma=max(ma,deep);
	
	int r[11],l[11];
	r[0]=0,l[0]=0;
	for(int i=2;i<=tr[0];i++){
		if(tr[i]<tr[1])l[l[0]+1]=tr[i],l[0]++;
		if(tr[i]>tr[1])r[r[0]+1]=tr[i],r[0]++;
	}
	tree(deep+1,l);
	tree(deep+1,r);
	
}

int main(){

	int n,i,j,k,father;
	int arr[11];
	
	i=1;
	while(cin >>n){
		arr[i]=n;
		i++;
	}
	arr[0]=i-1;
	n=i;
	
	tree(1,arr);
	
	cout<<ma+1<<'\n';
	
}

