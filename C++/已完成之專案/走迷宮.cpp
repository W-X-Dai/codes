#include<bits/stdc++.h>
using namespace std;

int i,j,x=1,y=1;
int arr[8][10]={{3,3,3,3,3,3,3,3,3,3},
				{3,0,1,1,0,0,0,0,2,3},
				{3,0,1,1,0,1,1,1,1,3},
				{3,0,1,1,0,1,1,1,1,3},
				{3,0,0,1,0,0,0,0,1,3},
				{3,1,0,1,1,1,1,0,1,3},
				{3,1,0,0,0,0,0,0,1,3},
				{3,3,3,3,3,3,3,3,3,3},};
char mov;

void move(){
	int m,m1,arr_m[4]={0},n;
	
	if(arr[x][y-1]!=0)arr_m[0]=1;//a
	if(arr[x-1][y]!=0)arr_m[1]=1;//w
	if(arr[x][y+1]!=0)arr_m[2]=1;//d
	if(arr[x+1][y]!=0)arr_m[3]=1;//s
	
	if(mov=='w')m=1,m1=-1;
	if(mov=='a')m=0,m1=-2;	
	if(mov=='s')m=3,m1=1;	
	if(mov=='d')m=2,m1=2;
	if(arr_m[m]==1)cout<<"X";
	else {
		arr[x][y]=0;
		x+=m1%2;
		y+=m1/2;
	}
	for(int ii=0;ii<4;ii++)cout<<arr_m[ii];
}

void map_maker(){
	srand(time(0));
	int x=rand()%5;
	x=1;
	
//	if(x==1){
		
		
//	}
	
	return;
}

void game_map(){
	system("cls");
	for(i=0;i<8;i++){
		for(j=0;j<10;j++){
			if(arr[i][j]==3)cout<<"#";
			if(arr[i][j]==0)cout<<" ";
			if(arr[i][j]==1)cout<<"@";
			if(arr[i][j]==2)cout<<"e";
			if(arr[i][j]==-1)cout<<"*";	
		}
		cout<<'\n';
	}
	return;
}
int main(){
	map_maker();
	arr[1][1]=-1;
	while(1){
		game_map();
		cin >>mov;
		move();
		cout<<123123;
		arr[x][y]=-1;
	}
	
	return 0;
	
}










