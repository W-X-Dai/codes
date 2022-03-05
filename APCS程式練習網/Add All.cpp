#include<bits/stdc++.h>
using namespace std;
int main(){
	priority_queue<long long> pq;
	long long n,i,tot,x,a,b;
	
	while(cin >>n){
		while(!pq.empty())pq.pop();
		if(n==0)return 0;
		tot=0;
		for(i=0;i<n;i++){
			cin >>x;
			pq.push(x*-1);	
		}
		for(i=0;i<n-1;i++){
			a=pq.top()*-1,pq.pop();
			b=pq.top()*-1,pq.pop();
			tot+=a+b;
			pq.push((a+b)*-1);
		}
		cout<<tot<<'\n';
	}
}

