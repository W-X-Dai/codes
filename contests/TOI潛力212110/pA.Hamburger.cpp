#include<bits/stdc++.h>
#define ll long long
#define MXN 1000005

using namespace std;

int n,k,tmp,ans,mx;
int w[MXN],m[MXN];
//dp[ij]:max of 0~i and mode=j 
int main(){
	
	cin >>n>>k;
	for(int i=0;i<n;++i)
		cin >>w[i];
	for(int i=0;i<n;++i)
		cin >>m[i];
	
	tmp=m[0];mx=w[0];
	for(int i=0;i<=n;++i){
		if(tmp!=m[i]){
			ans+=mx;
			mx=w[i];
			tmp=m[i];
		}else{
			mx=max(mx,w[i]);
		}
	}
		
		
	
	
	cout<<ans<<'\n';
}

