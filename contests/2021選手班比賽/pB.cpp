#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll n,i,j,x,ma;
ll len[1000005];
ll sq[1005];

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	ma=0;
	sq[1]=1;
	for(i=2;i<=1000;++i){
		sq[i]=sq[i-1]+(i-1)*2+1;
	}
	
	cin >>n;
	for(i=0;i<n;++i){
		cin >>x;
		for(j=2;sq[j]<=x;++j){
			if(x%j==0 && j!=x){
				len[j]+=(x/j);
				if(j!=x/j)len[x/j]+=j;
				
				if(len[j]>ma)ma=len[j];
				if(len[x/j]>ma)ma=len[x/j];
				break;
			}
		}
	}
	cout<<ma<<'\n';
	
}

