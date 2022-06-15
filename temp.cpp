#include<bits/stdc++.h>
#define ll long long
using namespace std;
int mp[20][20];
bool check(int i,int j){
	return mp[i][j]&&mp[i-1][j-1]&&mp[i+1][j+1]&&mp[i-1][j+1]&&mp[i+1][j-1];
}
int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int t;cin>>t;
	while(t--){
		char c;
		for(int i=0;i<8;++i){
			for(int j=0;j<8;++j){
				cin>>c;
				mp[i][j]=(c=='#');
			}
		}
		for(int i=1;i<7;++i){
			for(int j=1;j<7;++j){
				if(check(i,j))cout<<i+1<<' '<<j+1<<'\n';
			}
		}
	} 
	return 0;
}
