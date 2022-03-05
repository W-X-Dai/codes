#include<bits/stdc++.h>
#define eb emplace_back
#define N 1000000
using namespace std;

vector<int> v[1000005];
vector<int> lis1,lis2;
int arr[2000005],nums=0;

random_device rd;
mt19937 g(rd());

void randarr(int a){
//	cout<<a;
	int x=rand()%1000;
	int r=g()%7000000+5000000;
	
	if(a!=N && rand()%5==0)
	for(int i=x;i<=N;i+=r){
		if(a!=i){
			v[a].eb(i),++nums;
			lis1.eb(i),lis2.eb(a);
		}
	}
	if(a==N)for(int i=1;i<=10000;++i)v[a].eb(i),++nums,lis1.eb(i),lis2.eb(a);; 
//	cout<<'\n';
//	system("cls");
}

int main(){
	
	
	srand(time(0));
	ofstream f("f_00.in",ios::trunc);
//	freopen("data.out","w",stdout);
	if(!f)cout<<"error";
	
	for(int i=0;i<=2000000;++i)	arr[i]=i;
	for(int i=1;i<=N;++i)		randarr(i);
	
	f<<N<<" "<<nums<<'\n';
	cerr<<nums<<'\n';
	
	random_shuffle(arr,arr+nums);
	for(int i=0;i<nums;++i){
		f<<lis1[arr[i]]<<" "<<lis2[arr[i]]<<'\n';
	}

	cerr<<"the end";
}

