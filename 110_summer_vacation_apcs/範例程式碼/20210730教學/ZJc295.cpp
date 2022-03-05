#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m,i,j,x,tot=0,det=0;
	int arr[25],ans[25];
	
	cin >>n>>m;
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			cin >>arr[j];
		sort(arr,arr+m);
		ans[i]=arr[m-1];
		tot+=ans[i];
	}
	cout<<tot<<'\n';
	for(i=0;i<n;i++){
		if(tot%ans[i]==0){
			cout<<ans[i],det=1;
			break;
		}
	}
	i++;
	for(;i<n;i++){
		if(tot%ans[i]==0)
			cout<<" "<<ans[i];
	}
	if(!det)cout<<-1;//!false==true,!true==false
	cout<<'\n';
	
}

