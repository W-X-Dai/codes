#include<bits/stdc++.h>
#define ll long long
using namespace std;

unordered_map<int,int> ump;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,ans;
	
	cin >>ans;ump[ans]++;
	cout<<1<<" "<<ans<<'\n';
	while(cin >>n && n){
		ump[n]++;
		if(ump[n]>ump[ans]||(ump[n]==ump[ans]&&n<ans))ans=n;
		cout<<ump[ans]<<" "<<ans<<'\n';
	}


}

