#include<bits/stdc++.h>
using namespace std;

const int N=2e5+5;

int n;

struct st{
	void info(int _l,int _r,int _cnt){
		l=_l,r=_r,cnt=_cnt;
	}
	int l,r,cnt;
};

inline int val(st x){
	return x.cnt*2-(x.r-x.l+1);
}

inline void sol(){
	int mx=-1,mx_id,mx_l,mx_r;
	
	map<int,st> arr;
	map<int,int> vis;
	
	cin >>n;
	for(int i=1;i<=n;++i){
		int x;cin >>x;
		if(vis[x]){
			st tmp;tmp.info(arr[x].l,i,arr[x].cnt+1);
			if(val(tmp)>0)arr[x]=tmp;
			else arr[x].info(i,i,1);
		}else{
			vis[x]=1;
			arr[x].info(i,i,1);
		}
		if(val(arr[x])>mx){
			mx=val(arr[x]),mx_id=x;
			mx_l=arr[x].l,mx_r=arr[x].r;
		}
	}
	cout<<mx_id<<" "<<mx_l<<" "<<mx_r<<'\n';

}


int main(){
	int T;cin >>T;
	while(T--)sol();
	return 0;

}