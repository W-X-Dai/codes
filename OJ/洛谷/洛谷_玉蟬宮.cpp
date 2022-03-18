#include<bits/stdc++.h>
using namespace std;
int main(){
	char x;
	int m,n,i,j;
	int arr[1000][1000];
	stack<int> st;
	
	cin >>m>>n;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin >>x;
			if(x=='F')arr[n][m]=1;
			if(x!='F')arr[n][m]=0;
		}
	}
	
	for(int ii=0;ii<n;ii++){
		while(!st.empty())st.pop();
		for(i=0;i<m;i++){
			for(j=0;j<n;j++);
		
		}
	}
	
	
}

