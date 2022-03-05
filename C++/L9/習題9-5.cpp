#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	char x;
	int i;
	int arr[128]={0};
	
	getline(cin,s);
	int l=s.size();
	
	for(i=0;i<l;i++)
		arr[s[i]]=arr[s[i]]+1;
	
	for(i=0;i<128;i++){
		if(arr[i]!=0){
			x=i;
			cout<<x<<":"<<arr[i]<<'\n';
		}
	}
}

