#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;

void give_value();
void randstr();

string strrev(string s);

string s1,s2;
int main(){
	srand(time(NULL));
	give_value();
}

void randstr(){
	s1.clear(),s2.clear();
	int l=rand()%50+50,det=rand()%2,det1=rand()%2;
	for(int i=0;i<l;++i){
		if(rand()%2)s1+=rand()%26+65;
		else s1+=rand()%26+97;
		if(det){
			if(rand()%2)s2+=rand()%26+65;
			else s2+=rand()%26+97;
		}
	}
	if(rand()%2)s2=s1;
	if(!det){
		l=rand()%30+20;
		for(int i=0;i<l;++i){
			if(rand()%2)s2+=rand()%26+65;
			else s2+=rand()%26+97;			
		}
	}
}

void give_value(){
	ofstream f1("string_00.in",ios::trunc),f2("string_00.out",ios::trunc);
	int mod;
	
	
	for(int i=0;i<1000;++i){
		randstr();
		mod=rand()%3+1;
		f1<<mod<<"\n"<<s1<<'\n';
		if(mod==1)f2<<s1.size()<<'\n',cout<<s1.size()<<'\n';
		if(mod==2){
			for(int j=s1.size()-1;j>=0;--j){
				f2<<s1[j];
				cout<<s1[j];
			}
			f2<<'\n';
			cout<<'\n';
		}if(mod==3){
			f1<<s2<<'\n';
			if(s1==s2)f2<<"Yes\n",cout<<"Yes\n";
			else f2<<"No\n",cout<<"No\n";
		}
		
	}

}

string strrev(string s){
	string ss;
	int l=s.size(),j=0;
	
	for(int i=0;i<ss.size();++i)cout<<ss[i]<<'\n';
	return ss;
}

