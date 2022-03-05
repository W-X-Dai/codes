#include<bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	char ch;
	string s;
	int ma,i;
	
	for(i=0;i<128;i++){
		arr[i].name=i;
	}
	
	getline(cin,s);
	int l=s.size();
	
	for(i=0;i<l;i++)
		arr[s[i]].times++;

	
	
	cout<<'\n';
}

