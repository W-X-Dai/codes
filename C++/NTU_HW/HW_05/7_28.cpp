#include<bits/stdc++.h>
using namespace std;

int n,arr[100005],dist='a'-'A';

//check if it is a letter
inline bool isLetter(char x){
	return (x>='a' and x<='z') or (x>='A' and x<='Z');
}

bool testPalindrome(int l,int r){
	//the end of the recrusion
	if(l>=r)return 1;
	if(arr[l]!=arr[r])return 0;

	//contunue
	return testPalindrome(l+1,r-1);
}

int main(){
	string s;
	//use getline to read space
	getline(cin,s);

	int id=0;
	for(int i=0;i<s.size();++i){
		if(isLetter(s[i])){
			arr[id]=s[i];
			//change upper case to lower case
			if(arr[id]>'Z')arr[id]-=dist;
			++id;
		}
	}

	//print the result
	cout<<(testPalindrome(0,id-1) ? "True\n" : "False\n");

	return 0;
}