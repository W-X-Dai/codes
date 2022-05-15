#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;
int main(){
	int n,a,b,c,sum=0;
	
	cin >>n,n/=3;
	for(int i=0;i<n;++i){
		cin >>a>>b>>c;
		if(a>=b && a>=c)sum+=a;
		else if(b>=a && b>=c)sum+=b;
		else sum+=c;
	}
	cout<<sum<<'\n';
}

