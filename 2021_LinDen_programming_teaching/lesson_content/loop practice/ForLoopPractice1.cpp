#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;
int main(){
	int n,x,ans=0;
	
	cin >>n;
	for(int i=1;i<=n;++i){
		cin >>x;
		if(i%2==1)ans+=x;
		else ans-=x;
	}
	cout<<ans<<'\n';
	
}

