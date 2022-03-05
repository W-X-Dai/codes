#include<bits/stdc++.h>
#define eb emplace_back
#define pb pop_back()
using namespace std;

vector<int> v[10005];
stack<int> st; 
bool arr[10005];
int i,n,m,l,q,a,b;

int bad(int x){
	arr[x]=1;
	if(v[x].empty()){
		if(!st.empty())st.pop();
		if(!st.empty())return bad(st.top());
		else return 0;
	}
	
	for(int i=v[x].size()-1;i>=0;i--){
		st.push(v[x][i]);
		v[x].pop_back();
	}
	return bad(st.top());
}

int main(){
	cin >>n>>m>>l>>q;
	for(i=0;i<m;i++){
		cin >>a>>b;
		v[a].push_back(b);
	}
	for(i=0;i<l;i++){
		cin >>a;
		bad(a);
	}
	for(i=0;i<q;i++){
		cin >>a;
		if(arr[a]==0)cout<<"YA~~\n";
		else cout<<"TUIHUOOOOOO\n";
	}
}

