#include<bits/stdc++.h>
using namespace std;


stack<int> st;
int arr[1000006];

void sol(){
	while(!st.empty())st.pop();
	int n,cnt=0;

	cin >>n;
	for(int i=0;i<n;++i)cin >>arr[i];
	for(int i=0;i<n;++i){
		if(st.empty())st.push(i);
		else if(arr[i]>=arr[st.top()]){
			while(!st.empty() && arr[i]>=arr[st.top()]){
				++cnt;
				if(arr[i]!=arr[st.top()])st.pop(); 
			}
			
		}else st.push(i);
	}
	while(!st.empty())st.pop();
	for(int i=n-1;i>=0;--i){
		if(st.empty())st.push(i);
		else if(arr[i]>arr[st.top()]){
			while(!st.empty() && arr[i]>arr[st.top()]){
				++cnt;
				st.pop();
			}
		}else st.push(i);
	}	
	cout<<cnt<<'\n';
}

int main(){
	int t;
	cin >>t;
	while(t--)sol();
}