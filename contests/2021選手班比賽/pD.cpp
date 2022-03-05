#include<bits/stdc++.h>
using namespace std;

int n,q,x,a,b,ma,s;
int arr[1000005],tmp[1000005];

int main(){
	cin >>n>>q;
	for(int i=0;i<n;i++){
		cin >>arr[n];
	}
	for(int i=0;i<q;i++){
		cin >>a>>b;
		int jj=0;
		for(int j=a;j<=b;j++){
			tmp[jj]=arr[j];
			jj++;
		}
		sort(tmp,tmp+jj);
		cout<<tmp[2]<<'\n';
	}

}

