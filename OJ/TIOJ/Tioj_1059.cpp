#include<bits/stdc++.h>
using namespace std;

int func(int a){
	return (a+5)/10;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int i,s,t,n,x,tot=0;
	int sum,BaseSum;
	
	int arr[10];
	cin >>s>>t>>n;
	
	BaseSum=func(s*t*3);
	for(i=0;i<n;i++)cin >>x,tot+=x;
	
	for(i=0;i<tot;i++){
		if(i*10<t*2) 		sum+=func(s*7);
        else if(i*10<t*4) 	sum+=func(s*8);
        else if(i*10<t*6) 	sum+=func(s*9);
        else				sum+=func(s*10);
    
	}
		
	cout<<sum-BaseSum<<"\n";
    return 0;
}

