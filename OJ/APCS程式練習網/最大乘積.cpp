#include<bits/stdc++.h>
using namespace std;
int main(){
	long long arr[20],m,ans=0,i,b=0,e=0;
	int t=1;
	
	while(cin >>m){
		long long ma=0;
		for(i=0;i<m;i++){
			cin >>arr[i];
		}
		for(b=0;b<m;b++){
			for(e=b;e<m;e++){
				ans=1;
				for(i=b;i<=e;i++){
					ans*=arr[i];
				//	cout<<b<<" "<<e<<" "<<ans<<'\n';
					if(ans>ma)ma=ans;
				}
			}
		}
		if(ma<0)ma=0;
		cout<<"Case #"<<t<<": The maximum product is "<<ma<<"."<<'\n';
		cout<<'\n';
		t++;
	}
	
}

