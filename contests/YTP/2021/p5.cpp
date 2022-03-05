#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,x,ans=0;
	cin >>n>>m;
	n--;m--;
	
	x=min(n,m);
	for(int i=x;i>0;i--){
		ans+=(x+1-i)*(n-m+1);
		if(i>1 and i%2==0){
			ans+=i*i/2*(n-m+1);
		}
	}
	
	
	cout<<ans*2<<'\n';
	
}

