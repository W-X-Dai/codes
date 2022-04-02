#include<bits/stdc++.h>
#define ll long long
using namespace std;

vector<int> v,v1;

inline void func(){
	int cnt=1;v1.emplace_back(v[0]);
	for(int i=1;i<v.size();++i){
		if(v[i]==v[i-1])++cnt;
		else{
			if(cnt==1)v1.emplace_back(v[i]);
			else {
				v1.emplace_back(cnt),cnt=1;
				v1.emplace_back(v[i]);
			}
		}
	}
	if(cnt!=1){
	//	cout<<cnt<<'\n';
		v1.emplace_back(cnt);
	}
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);

	freopen("plus_00.in","r",stdin);
	freopen("plus_00.out","w",stdout);

	string s;int tmp=0;
	while(cin >>s){
		tmp=0;
		v.clear(),v1.clear();
		for(int i=0;i<s.size();++i){
			if(s[i]!='+')
				tmp+=s[i]-'a'+1;
		}
		int ttmp=1;
		while(tmp>=26){
			if(tmp%26)v.emplace_back(tmp%26);			
			v.emplace_back(26);
			tmp/=26;
		}
		if(tmp>1)v.emplace_back(tmp);
		func();
		for(int i=v1.size()-1;i>=0;--i){
			cout<<(char)(v1[i]+'a'-1);
		}
		cout<<'\n';
	}
	cerr<<"the end\n";
}

