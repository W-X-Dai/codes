#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("bomb_00.in","r",stdin);
	freopen("test.out","w",stdout);
	
	int n,m,k,t,a,b;
	int pos[8][2]={{1,0},{0,1},{1,-1},{-1,1},{-1,-1},{0,-1},{-1,0}};
	
	while(cin >>n>>m>>k>>t){
		int arr[105][105]={0};
		for(int i=0;i<k;++i){
			cin >>a>>b;
			arr[a][b]=1;
		}
		for(int i=0;i<t;++i){
			cin >>a>>b;
			int tmp=0;
			if(arr[a][b]==1)cout<<"bomb ";
			else{
				for(int j=0;j<8;++j)
					if(arr[a+pos[j][0]][b+pos[j][1]])++tmp;
				cout<<tmp<<" ";				
			}

		}
		cout<<'\n';
	}
}
