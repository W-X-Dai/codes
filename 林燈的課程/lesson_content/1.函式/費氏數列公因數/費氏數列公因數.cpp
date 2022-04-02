#include<bits/stdc++.h>
#define ll long long
#define N 1000005
#define pii pair<int,int>
#define f first
#define s second
#define eb emplace_back
#define WA ios::sync_with_stdio(0),cin.tie(0);

using namespace std;
int main(){
	ll a,b,F[10000];
	F[0]=0,F[1]=1;
	
	for(int i=2;i<91;++i){
		F[i]=F[i-1]+F[i-2];
	}
	int n;
	
	cin >>n;
	for(int i=0;i<n;++i){
		cin >>a>>b;
		cout<<__gcd(F[a],F[b])<<'\n';		
	}
	
	return 0;
}
