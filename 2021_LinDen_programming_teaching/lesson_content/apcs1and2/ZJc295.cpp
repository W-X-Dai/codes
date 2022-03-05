#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,m,cnt=0,x;
	vector<int> v,ans;
	
	cin >>n>>m;
	for(int i=0;i<n;++i){
		int mx=-1;
		for(int j=0;j<m;++j){
			cin >>x;
			mx=max(mx,x);
		}
		v.eb(mx);
		cnt+=mx;
	}
	cout<<cnt<<'\n';
	int suc=0;
	for(auto i:v)if(cnt%i==0)ans.eb(i),suc=1;
	
	if(suc==0)cout<<"-1";
	else{
		for(int i=0;i<ans.size();++i){
			cout<<ans[i];
			if(i+1!=ans.size())cout<<" ";
		}
	}
	cout<<'\n';
}

