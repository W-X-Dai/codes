#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,l,r,ans,suc;
	char x;
	string s;
	
	while(cin >>n){
	//	cin >>s;
		l=0,r=0,suc=1;
		for(int i=0;i<n;++i){
			if(r>l){
				suc=0;
				ans=0;
				break;
			}
			cin >>x;
			if(x=='[')++l;
			if(x==']')++r;
		}
		if(suc==0 or l!=r)l=0;
		if(suc==1)cout<<l%1000000007<<'\n';
	}

}
	
