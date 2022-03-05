#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);
	cin .tie(0);
	cout.tie(0);
	int x,i=0,j;
	set<int> s;
		
	while(cin >>x){
		if(x==0){
			cout<<'\n';
			return 0;
		}else if(x!=-1 and x!=-2)s.insert(x);
		else if(x==-1){
			cout<<*s.begin()<<" ";
			s.erase(*s.begin());
		}else if(x==-2){
			cout<<*s.rbegin()<<" ";
			s.erase(*s.rbegin());
		}
		
	}
	
	
	
	
}

