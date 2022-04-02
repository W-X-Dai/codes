#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	freopen("s_00.in","r",stdin);
	freopen("s_00.out","w",stdout);
	
	ios::sync_with_stdio(0),cin.tie(0);
	ll n,tmp[10005],arr[10005];
	set<int> s;
	while(cin >>n){
		for(int i=0;i<n;++i){
			cin >>arr[i];
			s.insert(arr[i]);
		}
		n=s.size();
		for(int i=0;!s.empty();++i){
			tmp[i]=*s.begin();
			s.erase(s.begin());
		}
		for(int i=0;i<n;++i){
			cout<<lower_bound(tmp,tmp+n,arr[i])-tmp+1<<" ";
		}
		cout<<'\n';
	} 


}

