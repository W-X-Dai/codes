#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll dp[1000005],k;

ll f91(int x){
	if(dp[x]!=-1)return dp[x];
	if(x>k){
	//	dp[x]=x-10;
		return x-10;
	}else{
	//	dp[x]=f91(f91(x+11));
	//	return dp[x];
		return f91(f91(x+11));
	}
}


int main(){
//	freopen("f91_00.in","r",stdin);
//	freopen("f91_00.out","w",stdout);
//	clock_t t1,t2;t1=clock();
//	ios::sync_with_stdio(0),cin.tie(0);
	int x;
	for(int i=0;i<1000005;++i)dp[i]=-1;
	while(cin >>x>>k){
		if(x==0)break;
		cout<<"f991("<<x<<") = ";
		cout<<f91(x)<<"\n";
	}
//	t2=clock();
//	cerr<<"Time:"<<((float)(t2-t1)/CLOCKS_PER_SEC)*1000<<"ms"<<'\n';

}
