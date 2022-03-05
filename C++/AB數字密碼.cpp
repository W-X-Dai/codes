#include<bits/stdc++.h>
using namespace std;
char arr[4],tst[4];
int i,j,n,a,b,re,w;
int main(){
	w=0;
	srand( time(NULL) ); 
	for(i=0;i<4;i++)arr[i] =  rand()%8+49;
	for(i=0;i<4;i++){
		for(j=0;j<4;j++){
			while(i!=j && arr[i]==arr[j]){
				arr[i] =  rand()%8+49;
			}
		}		
	}
	for(i=0;i<4;i++)cout<<arr[i];
	for(i=0;i<20;i++)cout<<'\n';
	while(w==0){
		while(true){
			for(i=0;i<4;i++)cin >>tst[i];
			re=0;
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					if(i!=j && tst[i]==tst[j]){
						cout<<"請勿輸入重複的數字"<<'\n';
						re++;
						break;
					};
				}
				if(re!=0)break;
			}
			if(re!=0)break;
			a=0;
			b=0;
			for(i=0;i<4;i++){
				for(j=0;j<4;j++){
					if(arr[i]==tst[j]){
						if(i==j){
							a++;
							if(a==3){
								w++;
								break;
							}
						else b++;
						}
					}
				}
			}
			cout<<"==>"<<a<<"A"<<b<<"B"<<'\n';
		}
	}
	cout<<"YOU WIN !"<<'\n';
	
return 0;
}
