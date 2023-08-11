//小遊戲 踩地雷
//鍵入座標進行遊戲
//座標前方加上*代表要踩安全的地方
//座標前方加上#代表掃雷
//掃錯雷一樣會輸
//踩完所有安全的地方獲勝
//掃完所有雷也算獲勝 
//格子中的數字代表它周圍的格子內有幾個地雷 
//地圖下方的數字代表剩下幾個安全的地方 
//遊戲愉快!
//製作:josh 
#include<bits/stdc++.h>
using namespace std;
//建構遊戲模板 
void picture(int i,int j,int k,int arr2[10][10],int guess[10][10]){
	for(i=0;i<41;i++)
		cout<<"_";
	cout<<'\n';
	
	for(i=0;i<10;i++){
		cout<<"|";
		for(j=0;j<10;j++){
			if(guess[i][j]==1)
				if(arr2[i][j]==-2 || arr2[i][j]==-1)
					cout<<" "<<'#'<<" "<<"|";
				else
					cout<<" "<<arr2[i][j]<<" "<<"|";
			else
				cout<<i<<"*"<<j<<"|";
			
		}
		cout<<'\n';
		for(k=0;k<41;k++)
			cout<<"-";
		cout<<'\n';
		
	}
}

int i,j,k,x,y,w,w1;
//ijk:控制迴圈 
//xy輸入座標
//w剩餘格子數 
//w1剩餘地雷數  
char n;
//輸入*#用 
int arr[10][10];	//遊戲底圖(哪一格是地雷) 
int arr2[10][10];	//遊戲地圖(周圍有幾個地雷) 
int guess[10][10];	//儲存你猜了哪些格子 (0沒有猜 1猜過) 

int  main(){
	w=100;
	w1=0; 
	srand(time(NULL));
	for(i=0;i<10;i++){
			//建構遊戲底圖 
			for(j=0;j<10;j++){
				arr[i][j]=rand()%10;//地雷密度(0為地雷，其餘數字安全) 
				if(arr[i][j]==0){
					//遇到地雷就將它四周的格子作記號 
					//這一段我還在想要如何用更短的程式碼完成  
					if(j==0){
						arr2[i+1][j+1]++;
						arr2[i-1][j+1]++;
						arr2[i][j+1]++;
						arr2[i][j-1]++;
						arr2[i+1][j]++;
						arr2[i-1][j]++;
					}else if(j==9){
						arr2[i+1][j-1]++;
						arr2[i-1][j-1]++;
						arr2[i][j-1]++;
						arr2[i+1][j]++;
						arr2[i-1][j]++;
					}else{
						arr2[i+1][j+1]++;
						arr2[i+1][j-1]++;
						arr2[i-1][j+1]++;
						arr2[i-1][j-1]++;
						arr2[i][j+1]++;
						arr2[i][j-1]++;
						arr2[i+1][j]++;
						arr2[i-1][j]++;	
					}
					
				}
			}
		}
		for(i=0;i<10;i++){
			for(j=0;j<10;j++)
				if(arr[i][j]==0){
				//是地雷就在地圖上標註-1
				//w為安全的格子數目，踩玩全部就勝利 
					arr2[i][j]=-1;
					w--;
					w1++;
				}
		}
//檢查用，可以看到遊戲地圖和底圖 
/*	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			guess[i][j]=1;
		} 
	}
	picture(i,j,k,arr2,guess);
	cout<<guess[1][2];
*/
//以下是控製遊戲進行的程式 
	while(true){
		system("clear");//清除以前的所有記號 
		cout<<"請輸入你想踩的座標(如下圖)"<<'\n';
		cout<<"玩法:輸入*之後輸入要踩的座標"<<'\n';
		cout<<"     輸入#之後輸入你覺得是地雷的座標"<<'\n';
		cout<<"     踩完所有安全的格子或是掃完所有的雷都算勝利"<<'\n'; 
		picture(i,j,k,arr2,guess);
		cout<<"剩下"<<w<<"格安全的格子"<<'\n';
		cout<<"剩下"<<w1<<"個地雷"<<'\n';
		cin >>n>>x>>y;
		guess[x][y]=1;
		if(n=='*'){
			if(arr2[x][y]==-1){
				system("clear");
				cout<<"請輸入你想踩的座標(如下圖)"<<'\n';
				for(i=0;i<10;i++){
					for(j=0;j<10;j++){
						guess[i][j]=1;
					} 
				}				
				picture(i,j,k,arr2,guess);
				cout<<"你踩到地雷了"<<'\n'; 
				cout<<"YOU LOSE"<<'\n';
				system ("pause");
				return 0;
			}
			w--;
			if(w==0){
				system("clear");	
				for(i=0;i<10;i++){
					for(j=0;j<10;j++){
						guess[i][j]=1;
					} 
				}
				picture(i,j,k,arr2,guess);
				cout<<"Y O U W I N !"<<'\n';
				system ("pause");
				return 0;
			}
		}else if(n=='#'){
			if(arr2[x][y]!=-1){
				system("clear");	
				for(i=0;i<10;i++){
					for(j=0;j<10;j++){
						guess[i][j]=1;
					} 
				}
				picture(i,j,k,arr2,guess);				
				cout<<"那裡沒有地雷"<<'\n'; 
				cout<<"YOU LOSE"<<'\n';
				system ("pause");
				return 0;
			}
			w1--;
			if(w1==0){
				system("clear");
				for(i=0;i<10;i++){
					for(j=0;j<10;j++){
						guess[i][j]=1;
					} 
				}
				picture(i,j,k,arr2,guess);
				cout<<"Y O U W I N !"<<'\n';
				system ("pause");
				return 0;
			}
			arr2[x][y]=-2;//-2代表被掃過的地雷 
		}
		
	
	}
return 0;
}
//未來展望:地雷提示(有點麻煩)
//		   自己控制地圖的格數(也很麻煩)
//		   加入計分系統(比較簡單一點，可是一樣麻煩) 