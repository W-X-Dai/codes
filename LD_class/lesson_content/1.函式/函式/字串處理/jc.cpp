#include<bits/stdc++.h>
using namespace std;
int main(){
	//f1:my code/f2:test data
	string s1,s2,ss1,ss2;cin >>ss2;
	ifstream f1("test.out"),f2(ss2);
	clock_t t1,t2;
	int i=0,AC=1;
	
	t1=clock();
	while(f1>>s1){
		f2>>s2;
		if(s1!=s2){
			cout<<"WA Line:"<<i<<'\n';
			AC=0;
			break;
		}
		++i;
	}
	t2=clock();
	if(AC)cout<<"AC\n";
	cout<<"Time:"<<((float)(t2-t1)/CLOCKS_PER_SEC)*1000<<"ms"<<'\n';
}
