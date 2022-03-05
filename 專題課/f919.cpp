#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	int a=0,b=0,i,j;
	cin >>s1>>s2;

	for(i=0;i<4;i++){
			for(j=0;j<4;j++){
				if(s1[i]==s2[j] && i==j)a++;
				if(s1[i]==s2[j] && i!=j)b++;
				
			}
		}
		cout<<a<<"A"<<b<<"B"<<'\n';




}



