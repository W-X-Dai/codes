#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;
int main(){
	int n;
	cin >>n;
	ll a=1,b=1,sum=0;
	for(int i=0;i<n;++i){
		sum+=a;
		a+=b;
		swap(a,b);
	}
	cout<<sum<<'\n';
}

