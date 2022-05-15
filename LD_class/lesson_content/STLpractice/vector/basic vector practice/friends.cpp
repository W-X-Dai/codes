#include<bits/stdc++.h>
using namespace std;

vector<int> v[1000005];
int main(){
//	ios::sync_with_stdio(0),cin.tie(0);
		
	freopen("f_00.in","r",stdin);
	freopen("f_00.out","w",stdout);
	
	clock_t t1,t2;
	t1=clock();
	
	int i,j,a,b,n,k;
	cin >>n>>k;
	int arr[n];
	
	for(i=0;i<k;i++){
		cin >>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}
	
	for(int i=1;i<=n;++i){
		int temp=-1;
		sort(v[i].begin(),v[i].end());
		for(int a:v[i]){
			if(a!=temp){
				cout<<a,temp=a;
				if(a!=*(v[i].end()-1))cout<<" ";
			}
		}
		if(v[i].empty())cout<<"qq";
		cout<<'\n';
	}
	t2=clock();
	cerr<<"Time:"<<((float)(t2-t1)/CLOCKS_PER_SEC)*1000<<"ms"<<'\n';
	
}
