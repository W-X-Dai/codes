#include<bits/stdc++.h>
using namespace std;

int length(char s[]);
void reverse();
void cmp();

char s1[505],s2[505];

int main(){
	
	freopen("string_00.in","r",stdin);
	freopen("test.out","w",stdout);
	
	char s[505];
	int mod;
	
	while(cin >>mod){
		cin.ignore();
		cin.getline(s1,500);
		
		if(mod==1)cout<<length(s1)<<'\n';
		if(mod==2)reverse();
		if(mod==3)cmp();
		
	}
	

}


int length(char s[]){
	int i=1;
	while(s[i]!='\0')++i;
	return i;
}

void reverse(){
	int l=length(s1);
	for(int i=l-1;i>=0;--i)cout<<s1[i];
	cout<<'\n';
}

void cmp(){
	cin.getline(s2,500);
	int l1=length(s1),l2=length(s2);

	if(l1!=l2){
		cout<<"No\n";
		return;
	}

	for(int i=0;i<l1;++i){
		if(s1[i]!=s2[i]){
			cout<<"No\n";
			return;
		}
	}
	cout<<"Yes\n";
	return;
}
