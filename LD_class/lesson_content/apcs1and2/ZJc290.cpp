#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int a=0,b=0;
    string s;
    
    cin >> s;
    for(int i=0;i<s.size();++i){
    	if(i%2)a+=s[i]-'0';
		else b+=s[i]-'0';
	}
    cout<<abs(a-b)<<'\n';
}
