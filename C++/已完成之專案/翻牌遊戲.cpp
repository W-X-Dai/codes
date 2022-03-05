#include<bits/stdc++.h>
using namespace std;
int arr[16];
int arr2[16];
int i,j,x,y,a,b,d;
//遊戲底圖 
void game_map(){
	system("cls");
	cout<<"請輸入要翻的座標"<<'\n'; 
	
	for(i=0;i<20;i++)cout<<"_";
	cout<<'\n';
	for(i=0;i<16;i++){
		if(arr2[i]==0){
			if(i<10)cout<<" 0"<<i<<" |";
			if(i>=10)cout<<" "<<i<<" |";
			if((i+1)%4==0){
				cout<<'\n';
				for(j=0;j<20;j++)cout<<"-";
				cout<<'\n';
			}
			
		}else{
			if(arr[i]<10)cout<<"[0"<<arr[i]<<"]|";
			if(arr[i]>=10)cout<<"["<<arr[i]<<"]|";
			if((i+1)%4==0){
				cout<<'\n';
				for(j=0;j<20;j++)cout<<"-";
				cout<<'\n';
			}
		}
		
		
	}
	if(d==1){
		cout<<"你已經翻過那張牌了"<<'\n';
	}
//檢查用，可以看見哪些牌被翻過 	
//	for(int k=0;k<16;k++)cout<<arr2[k]<<" ";
	
}
bool det(){
	return arr[a]==arr[b];
}

int  main(){
	srand(time(NULL));
	for(i=1;i<=16;i++)arr[i-1]=i;
	random_shuffle(arr,arr+16);
	for(i=0;i<16;i++)if(arr[i]>8)arr[i]-=8;
//下兩行為檢查用，可以看見整個陣列  
//但是要記得把game_map()裡面的 system("cls")關掉 
//	for(i=0;i<16;i++)cout<<arr[i]<<" ";
//	cout<<'\n';
	a=-1,b=-1;
	while(true){
		game_map();
		cin >>x>>y;
		if(arr2[x]==1 || arr2[y]==1){
			d++;
		}else{
			arr2[a]=det();
			arr2[b]=arr2[a];
			arr2[x]=1;
			arr2[y]=1;
			a=x;
			b=y;
		}
	}
	
	
	
return 0;
}
