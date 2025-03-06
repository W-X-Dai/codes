#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	string s;

	cin >>n;
	for(int i=0;i<n;++i){
		int cnt=0;
		cin >>s;
		for(auto i:s){
			if(i>'Z')cnt+=i-'a'+1;
			else cnt+=i-'A'+1;
		}
		cout<<cnt;
		if(cnt%13==0)cout<<" Lucky";
		cout<<'\n';
	}
}