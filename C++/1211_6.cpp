#include<bits/stdc++.h>
using namespace std;

inline bool cmp(string a,string b){
	for(int i=0;i<4;++i){
		if(a[i]!=b[i])return 0;
	}
	return 1;
}

int main(){
	int n,x=0;
	string s[10005];

	cin >>n;
//	while(cin >>s[x])++x;
	for(int i=0;i<n;++i)cin >>s[i];
	// if(x!=n){
	// 	cout<<"incorrect input\n";
	// 	return 0;
	// }

	sort(s,s+n);
//	for(int i=0;i<n;++i)cout<<s[i]<<'\n';

	string current;
	for(int ii=0;ii<4;++ii){
		current+=s[0][ii];
	}
	cout<<s[0][0]<<s[0][1]<<s[0][2]<<s[0][3]<<":";
//	cout<<cmp(current,s[0]);
	for(int i=0;i<n;++i){
		if(!cmp(s[i],current)){
			current.clear();
			for(int ii=0;ii<4;++ii){
				current[ii]+=s[i][ii];
			}
			cout<<'\n'<<s[i][0]<<s[i][1]<<s[i][2]<<s[i][3]<<":";
		}

	}


}