#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll a(int n){
	if(n==1)return 1;
	return 2*a(n-1)+1;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	freopen("a_00.in","r",stdin);
	freopen("a_00.out","w",stdout);
	
	
	int n;
	while(cin >>n){
		cout<<a(n)<<'\n';
	}

}

