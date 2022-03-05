#include<bits/stdc++.h>
using namespace std;

string up(string s){
	int i,l=s.size();
	for(i=0;i<l;i++){
		if(s[i]<95)s[i]+=32;
	}
	return s;
}


int main(){
	string s;
	char x;
	int l,ans[100];
	
	while(cin >>s){
		s=up(s);
		ans[100]={0};
		ans[0]=1;
		cin >>x;
		if(x<95)x+=32;
		l=s.size();
		for(int i=0;i<l;i++){
			if(s[i]==x){
				ans[ans[0]]=i;
				ans[0]++;
			}
		}
		for(int i=2;i<ans[0];i++){
			cout<<ans[i]-ans[i-1]<<" ";
		}
		cout<<'\n';
		s.clear();
	}
}

