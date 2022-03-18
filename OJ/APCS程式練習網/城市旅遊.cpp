#include<bits/stdc++.h>
using namespace std;
vector<int> v[10000];
bool det(int a,int b){
	if(visit[a])return 0;
	if(v[a].empty())return 0;
	
	
	
	
	
}


int main(){
	int a,b;
	int n,m,i,k,x;
	
	bool visit[10000]=0;
	
	cin >>n>>m;
	for(i=0;i<m;i++){
		cin >>a>>b;
		v[a].push_back(b); 
	}
	cin >>a>>b;
	cout<<det(a,b);
	
}

