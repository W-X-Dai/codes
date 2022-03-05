#include <bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int a1[1001],a2[1001];
	int n,t=0;
	cin>>n;
	cin>>s1;
	cin>>s2;
	for(int i=0;i<n;i++){
		a1[i]=s1[i]-'0'+48;
		a2[i]=s1[i]-'0'+48;
	}
	sort(a1,a1+n);
	sort(a2,a2+n);
	for(int i=0;i<n;i++){
		if(a1[i]==a2[i]){
			t++;
		}
	}
	cout<<t;
	return 0;
}
