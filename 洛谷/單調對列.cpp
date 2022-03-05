#include<bits/stdc++.h>
using namespace std;

stack<int> stk;
int ans[3000050];
int arr[3000050];
int i,x,n;

int main(){
	cin >>n;
	for(i=0;i<n;i++)cin >>arr[i];
	for(i=0;i<n;i++){
		stk.push(i);
		while(arr[i+1]>arr[stk.top()]){
			ans[stk.top()]=arr[i+1];
			stk.pop();
		}
	}
	for(i=0;i<n;i++)cout<<arr[ans[i]]<<" ";
	
	
}
