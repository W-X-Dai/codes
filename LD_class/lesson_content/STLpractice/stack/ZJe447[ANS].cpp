#include<bits/stdc++.h>
using namespace std;
int main(){
	queue<int> q;
	int n,k,x;
	
	cin >>n;
	for(int i=0;i<n;++i){
		cin >>k;
		if(k==1)cin >>x,q.push(x);
		else if(k==2){
			if(q.empty())cout<<-1<<'\n';
			else cout<<q.front()<<'\n';
		}else if(!q.empty())q.pop();
	}


}

