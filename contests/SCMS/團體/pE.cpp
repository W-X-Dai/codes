#include <bits/stdc++.h>
using namespace std;

int q,x,t;
int s[500000];

int main(){
    ios::sync_with_stdio(0),cin.tie(0);
	int ans=0;

    cin >>q>>x;
	for(int i=1;i<=q;++i){
		cin >>t;
		++s[t%x];

		while(s[ans%x]!=0){
			s[ans%x]--;
			++ans;
		}
		cout<<ans<<'\n';
	}
	return 0;
}