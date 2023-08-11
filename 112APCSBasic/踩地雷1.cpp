#include<bits/stdc++.h>
using namespace std;

//設定遊戲語言0:中文 1:英文
int lang;


int  main(){
	//以下是控製遊戲進行的程式
	cout<<"請選擇遊戲語言(0:中文，1:英文)";
	cin >>lang;

	cout<<"請輸入你想踩的座標(如下圖)"<<'\n';
	cout<<"玩法:輸入*之後輸入要踩的座標"<<'\n';
	cout<<"     輸入#之後輸入你覺得是地雷的座標"<<'\n';
	cout<<"     踩完所有安全的格子或是掃完所有的雷都算勝利"<<'\n'; 
	//顯示版面
	
	char mode;
	int x,y;

	cin >>mode>>x>>y;
	if(mode=='*')cout<<"踩"<<x<<","<<y<<'\n';
	else if(mode=='#')cout<<"在"<<x<<","<<y<<"插旗"<<'\n';


	return 0;
}
