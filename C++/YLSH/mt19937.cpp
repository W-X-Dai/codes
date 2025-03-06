#include<bits/stdc++.h>
#define ll long long
#define eb emplace_back
#define pb puch_back
#define pii pair<int,int>
#define f first
#define s second
#define N 500005
#define AC ios::sync_with_stdio(0),cin.tie(0);
#define inf 0x3f3f3f3f

using namespace std;
int main(){
	AC 
	random_device rd;
	int x;
	
	clock_t t1,t2;
  	mt19937 generator(rd()); 
  	srand(time(0));
  	
	t1=clock();
	for(int i=0;i<1000000000;++i)
		generator();
	cout<<'\n';

	t2=clock();
	x=((float)(t2-t1)/CLOCKS_PER_SEC)*1000;
	
	t1=clock();
	for(int i=0;i<1000000000;++i)
		rand();
	cout<<'\n';
	
	t2=clock();
	cout<<"Time1:"<<x<<"ms"<<'\n';
	cout<<"Time2:"<<((float)(t2-t1)/CLOCKS_PER_SEC)*1000<<"ms"<<'\n';

	vector<int> v ={1,3,4,6,7};
    cout<<*v.begin();
}

