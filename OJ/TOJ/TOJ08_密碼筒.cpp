//TOJ 08
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,l,x,i,j=0;
	string s;
	vector<int> v;
	cin >>x>>s;
	l=s.size();
	for(i=0;i<l;i+=x){
		if(i>l)i-=l;
		v[i]=j;
		j++;
	}
	for(i=0;i<l;i++)cout<<v[i];
	
	
}
