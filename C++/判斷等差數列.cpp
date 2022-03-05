#include<bits/stdc++.h>
#define ll long long
using namespace std;

bitset<1000005> arr;
int n;

inline void func(int n){
	for(int i=1;i<=n;++i){
		if(!arr[i] || (n+i)&1)continue;
		if(arr[(n+i)/2]==1){
			arr[n]=0;
			return;
		}
	}
	arr[n]=1;
}

int main(){
	ios::sync_with_stdio(0),cin.tie(0);
	freopen("NumList.txt","w",stdout);
	
	cin >>n;cout<<"1~"<<n<<'\n';
	arr[0]=1,arr[1]=1;
	for(int i=3;i<=n;++i){
		func(i);
	}
	int cnt=0;
	for(int i=1;i<=n;++i){
		if(arr[i]==1){
			if(cnt && !(cnt%100))cout<<"\n\n",cerr<<"\n\n";
			++cnt;
			cout<<i<<" ";
			cerr<<i<<" ";
		}
	}
	cout<<'\n',cerr<<'\n';
	cerr<<"共 "<<cnt<<" 項"<<'\n';
	cout<<"共 "<<cnt<<" 項"<<'\n';
}

