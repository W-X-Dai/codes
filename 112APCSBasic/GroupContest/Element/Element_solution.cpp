#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	string str;
	cin>>str;
	
	int sum=0,char_tmp=0;
	int num=-1;
	str=str+"*";
	for(int i=0;i<str.length();++i){
		if(isdigit(str[i])){
			if(num==-1)num=(int(str[i])-'0'); 
			else num=num*10+(int(str[i])-'0');
		}else{
			if(num==-1)sum+=char_tmp;
			else sum+=char_tmp*num;
			num=-1;
			if(str[i]=='C')char_tmp=12;
			else if(str[i]=='H')char_tmp=1;
			else if(str[i]=='O')char_tmp=16;
			else char_tmp=14;
		}
	}
	cout<<sum<<'\n';
	
	return 0;
}
