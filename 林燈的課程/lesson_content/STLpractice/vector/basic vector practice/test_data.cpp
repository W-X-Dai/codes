#include<bits/stdc++.h>
#define eb emplace_back
#define N 10000
using namespace std;

vector<int> v[100005],tmp[100005];
int arr[10005],nums=0;

void randarr(int a){
	int x=rand()%400+600;

	for(int i=1;i<=N;++i){
		if(rand()%x==0 && a!=i)tmp[a].eb(i),++nums;
	}
//	cout<<'\n';

}

int main(){
	srand(time(0));
	ofstream f("f_00.in",ios::trunc);
	freopen("data.out","w",stdout);
	
	for(int i=1;i<=10000;++i)arr[i]=i;
	random_shuffle(arr+1,arr+10001);
	for(int i=1;i<=10000;++i){
		randarr(i);
	}
	
	for(int i=1;i<=1000;++i){
		int temp=-1;
		for(int j:tmp[i]){
			if(j!=temp)v[i].eb(j),temp=j,cout<<j<<" ";
			else nums--;
		}
		cout<<'\n';
	}
	
	
	f<<N<<" "<<nums<<'\n';
	cerr<<nums<<'\n';
	random_shuffle(arr+1,arr+10001);
	for(int i=1;i<=N;++i){
		for(int j=1;j<=N;++j){
			if(!v[arr[j]].empty()){
				f<<arr[j]<<" "<<*v[arr[j]].rbegin()<<'\n';
				v[arr[j]].pop_back();
			//	break;
			}
		}
	}
	cerr<<"the end";
}

