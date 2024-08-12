#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

inline void sol(){
	string a,b;
	vector<string> v;
	int cnt=1;
	
	cin >>a;
	for(int i=1;i<16;++i){
		cin >>b;
		if(b==a)++cnt;
		else{
			if(cnt==1){
				cout<<a<<" ";
			}else if(cnt==2){
				v.eb(a);
			}
			a=b;
			cnt=1;
		}
	}
	if(cnt==1)cout<<b<<" ";
	if(v.size()>1){
		for(auto i:v)cout<<i<<" ";
	}
	cout<<'\n';
	return;
}

int main(){
	int T;cin >>T;
	while(T--)sol();

}
/*
3
1W 1W 1W 2W 2W 2W 3W 3W 3W 4W 4W 4W 5W 5W 5W 6W
1W 1W 2W 2W 3W 3W 3W 4W 4W 4W 5W 5W 5W 6W 6W 6W
1W 1W 2O 2O 2O 1I 1I 5I 5I 5I 1S 1S 1S 3S 3S 3S

*/


