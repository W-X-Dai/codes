#include<bits/stdc++.h>
using namespace std;

string s[1000000];
int n,m,a,b,l,j;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	
	cin >>n>>m;
	for(int i=0;i<n;i++){
		cin >>s[i];
	}
	for(int i=0;i<m;i++){
		cin >>a>>b;
		l=min(s[a].size(),s[b].size());
		for(j=0;j<l;j++){
			if(s[a][j]!=s[b][j]){
				break;
			}
			
		}
		cout<<j<<'\n';
	}
	
}


