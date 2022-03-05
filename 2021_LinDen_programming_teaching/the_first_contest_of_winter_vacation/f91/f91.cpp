#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[1000005],n;

ll f91(int n){
	if(arr[n]!=-1)return arr[n];
	if(n<=100){
		arr[n]=f91(f91(n+11));
		return arr[n];
	}else{
		arr[n]=n-10;
		return arr[n];
	}
}

int main(){
//	ios::sync_with_stdio(0),cin.tie(0);
	freopen("f91_00.in","r",stdin);
	freopen("f91_00.out","w",stdout);
	
	fill(arr,arr+1000005,-1);
	while(cin >>n){
		cout<<f91(n)<<'\n';
	}

}

