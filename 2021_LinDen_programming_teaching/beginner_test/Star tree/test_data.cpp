#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;

void make_tree(int n);
void give_value(int x);
string s1,s2;

int main(){
	srand(time(NULL));
	for(int i=0;i<=9;++i){
		int x;char tmp=i+48;
		s1.clear(),s2.clear();

		s1="startree_0";s1+=tmp;s1+=".in";
		s2="startree_0";s2+=tmp;s2+=".out";
		int t=1;
		cout<<t<<" ";
		for(int j=0;j<t;++j){
			x=rand()%500+1000;if(x%2==0)--x;
			x=i;
			if(x%2==0)x++;
			cout<<x<<'\n';
			give_value(x);
			make_tree(x);
		}

	}
	return 0;
}

void give_value(int x){
	ofstream f1;
	f1.open(s1,ios::app);
	f1<<x<<'\n';
}

void make_tree(int n){
	ofstream f2;
	f2.open(s2,ios::app);
	int t=(n+1)/2;
	for(int i=1;i<=t;++i){
		for(int j=0;j<t-i;++j)f2<<" ";
		for(int j=0;j<i*2-1;++j)f2<<"*";
			f2<<'\n';
	}
	
	t=n-t;
	for(int i=0;i<t;++i){
		for(int j=0;j<t;++j)f2<<" ";
		f2<<"*\n";
	}
		
	f2<<'\n';
}
