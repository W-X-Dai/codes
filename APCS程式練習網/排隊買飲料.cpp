#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m,x,i;
	cin>>n>>m;
	
	priority_queue<int> pq;
	for(int i=0;i<m;i++) pq.push(0);
	for(int i=0;i<n;i++){
		cin>>x;
		int tp=pq.top()*-1;
		pq.pop();
		pq.push((tp+x)*-1);
	}
	int ans=0;
	
	while(!pq.empty()){
		ans=pq.top()*-1;pq.pop();
	}
	cout<<ans<<'\n';
	return 0;
}
