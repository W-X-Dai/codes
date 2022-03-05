#include<bits/stdc++.h>
using namespace std;
int main(){
	int num[3],luc[5],mon[5];
	int ans=0,det=1;
	
	for(int i=0;i<3;i++)cin >>num[i];
	for(int i=0;i<5;i++)cin >>luc[i];
	for(int i=0;i<5;i++)cin >>mon[i];
	
	for(int i=0;i<2;i++){
		for(int j=0;j<5;j++){
			if(num[i]==luc[j])ans+=mon[j];	
		}
	}
	for(int i=0;i<5;i++){
		if(num[2]==luc[i])ans-=mon[i],det=0;
	}
	
	if(det==1)ans*=2;
	if(ans<0)ans=0;
	cout<<ans<<'\n';
	
}

