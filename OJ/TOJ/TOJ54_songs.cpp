#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	int n,arr[27];
	string s;
	bool suc=1;
	
	while(cin >>n){
		suc=1;
		if(!n)return 0;
		fill(arr,arr+27,0);
		for(int i=0;i<n;++i){
			cin >>s;
			
			int f=(int)*s.begin()-(int)'a'+1;
			int e=(int)*s.rbegin()-(int)'a'+1;
			arr[f]++,arr[e]--;
		}
		for(int i=1;i<=26;++i){
			if(arr[i]!=0){
				cout<<"NG\n";
				suc=0;break;
			}
		}
		if(suc)cout<<"OK\n";
	}



}

