#include<bits/stdc++.h>
using namespace std;

int arr[25];
int mark[25];
int score[25]={0};
int ma=0;

void mk(int n){

	for(int i=0;i<25;i++){
		if(arr[i]==n){
			mark[i]=1;		
		}
	}
}

int det(int n,int x,int y){
	mark[n]=1;
	bool plus=0;
	if(x==y){
		plus=0;
		for(int i=0;i<=24;i+=6){
			if(mark[i])plus=1;
			else {
				plus=0;
				break;
			}
		}
		
	}
	if(plus)cout<<1<<'\n',score[n]++;
	if((x+y)==6){
		for(int i=4;i<=20;i+=4){
			if(mark[i])plus=1;
			else {
				plus=0;
				break;
			}
		}
	}
	if(plus)cout<<2<<'\n',score[n]++;
	for(int i=x-1;i<=20+x;i+=5){
		if(mark[i])plus=1;
		else {
			plus=0;
			break;
		}
	}
	if(plus)cout<<3<<'\n',score[n]++;
	for(int i=5*(y-1);i<y*5;i++){
		if(mark[i])plus=1;
		else {
			plus=0;
			break;
		}
	}
	if(plus)cout<<4<<'\n',score[n]++;
	ma=max(ma,score[n]);
	mark[n]=0;
}

void func(int n){
	int i,x,y;
	for(i=0;i<=25;i++){
		if(arr[i]==n)break;
	}
	for(x=i;x>=0;x-=5);
	x+=6;
	for(y=i;y%5!=0;y--);
	y/=5,y++;
	det(n,x,y);
}

int main(){
	int n,i,j;
	
	for(i=0;i<25;i++)
		cin >>arr[i];
	
	while(1){
		cin >>n;
		if(n==-1)break;
		mk(n);
	}
/*	for(i=0;i<25;i++){
		if(mark[i]==0){
		//	cout<<">>"<<arr[i]<<" "<<mark[i]<<'\n';
			func(i);	
		}
	}*/
	func(10);
	for(i=0;i<25;i+=5){
		for(j=i;j<i+5;j++){
			cout<<mark[j]<<" ";
		}
		cout<<'\n';
	}
	
	for(i=0;i<25;i++){
		if(score[i]==ma){
			cout<<arr[i]<<'\n';
			return 0;
		}
	}
}

