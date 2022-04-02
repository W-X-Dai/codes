#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back
#define pb pop_back
using namespace std;

int k;
vector<int> arr;
string s;

inline bool det(char x){
	return x<='z' && x>='a';
}

void record(){
	int now,com;
	now=det(s[0]);com=1;
	for(int i=1;i<s.size();++i){
		if(det(s[i])==now)++com;
		else{
			arr.eb(com);
			now=1-now;
			com=1;
		}
	}
	arr.eb(com);
}

inline int find(int x){
	int cnt=1,i=x+1;
	for(;i<arr.size();++i){
		if(arr[i]==k)++cnt;
		if(arr[i]>k){
			++cnt;
			break;
		}
	}
//	cout<<x<<" "<<cnt<<'\n';
	return cnt;
}

int main(){
//	ios::sync_with_stdio(0),cin.tie(0);
	cin >>k>>s;
	
	record();
	for(auto i:arr)cout<<i<<" ";
	cout<<'\n';
	
	bitset<100005> ans;
	int cnt=0;
	for(int i=0;i<arr.size();){
		if(arr[i]>=k){
			int jump=find(i)*k;
			i+=jump-1;
			cnt=max(cnt,jump);
		}else ++i;
	}
	cout<<cnt<<'\n';
}

