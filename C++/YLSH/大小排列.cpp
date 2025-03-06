#include<iostream>
using namespace std;
int main(){

	int n,x,i,max;
	cout<<"請輸入項數";
	cin >>n ;
		int list[n];

		i=1;
		while(i<=n){
			cin>>list[i];
			i=i+1;
		}
		i=1;
		max=list[1];
		while(i<=n){
			if (list[i]>max){
				max=list[i];
			}
			i=i+1;
		
		}
			list[n+1]=max;
			i=1;
			while(i<=n){
				if(list[i]>list[i+1]){
					x=list[i];
					list[i]=list[i+1];
					list[i+1]=x;
					i=0;
				}
				i=i+1;
			}
			i=1;
			while(i<=n){
				
				cout<<i<<":"<<list[i]<<endl;
				i=i+1;
			}
return 20;
}
