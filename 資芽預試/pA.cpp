#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll arr[200005],pre[200005],goal; 

int main(){
	//ios::sync_with_stdio(0),cin.tie(0);
	ll n,m,k;
	
	cin >>n>>m>>k;
	goal=n&1 ? n*m : n*m-m+1; 
	for(int i=0;i<k;++i){
		ll x,y,tmp=0;
		
		cin >>y>>x,tmp+=(y-1)*m;
		tmp+=(y%2 ? x:m+1-x);
		
		arr[i]=tmp;
	}
	sort(arr,arr+k);
	for(int i=0;i<k;++i)cout<<arr[i]<<" ";
	cout<<'\n';

	ll cnt=1;pre[0]=arr[0]-1;
	for(int i=1;i<k;++i){
		if(arr[i]==arr[i-1]+1)++cnt,pre[i]=pre[i-1];
		else{
			pre[i]=arr[i]-1;
			cnt=0;
		}
		if(cnt>=6){
			cout<<"-1"<<'\n';
			return 0;
		}
	}
	for(int i=0;i<k;++i)cout<<pre[i]<<" ";
	cout<<'\n';	
	ll step=0;cnt=0;
	for(int i=0;i<k;++i){
		if((arr[i]-step)%6==0){
			cout<<"step1:"<<step<<" "<<cnt<<'\n';
			cnt+=(arr[i]-step)/6;
			if((arr[i]-step)%6 && arr[i]!=step)++cnt;
			step=arr[i]-1;
		}else{
			cout<<"step2:"<<step<<" "<<cnt<<'\n';
			cnt+=(pre[i]-step)/6;
			if((arr[i]-step)%6 && arr[i]!=step)++cnt;
			step=pre[i];
			
		}
	}
	cnt+=(goal-step)/6;
	cnt+=(goal-step)%6 ? 1 : 0;
	cout<<cnt<<'\n';

}

