#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	pair<int,int> p[1005];
	int n,i;
	
	cin >>n;
	for(i=0;i<n;i++)cin >>p[i].first>>p[i].second;
	
	sort(p,p+n);
	for(i=0;i<n;i++){
		cout<<p[i].first<<" ";
		cout<<p[i].second<<'\n';
	}
	
	
}

