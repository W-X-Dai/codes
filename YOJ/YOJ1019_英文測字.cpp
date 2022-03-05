//YOJ1019_­^¤å´ú¦r
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int l,i,x;
	while(cin >>s){
		x=0;
		l=s.size();
		for(i=0;i<l;i++){
			if(s[i]<97)x+=32;
			x+=s[i];
		}
		x-=l*96;
		cout<<x<<'\n';
	}
	
}
