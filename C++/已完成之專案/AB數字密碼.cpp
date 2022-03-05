//小遊戲 AB數字密碼(又名:1A2B)
//遊戲規則不再贅述，詳見https://blog.edumeme.org/2018/07/1a2b.html  
//一次猜中所有位數算勝利  
//可選擇位數  
//中間有兩行檢查用代碼  
//遊戲愉快!
//有一個漏洞，當位數過大時，輸出的題目值會有問題
//輸出的題目會出現字元重複的現象 
//製做:josh
#include<bits/stdc++.h>
using namespace std;
int i,j,a,b,n,x;
//i j執行迴圈  
//a b給出提示  
//n 位數  
//x 判斷輸入值是否合理  
int main(){
	do{
	x=0;
	cout<<"請選擇位數(1-9)"<<'\n';
	cin >>n; 
	if(n>9 || n<1){
		cout<<"請輸入有效位數"<<'\n';
		x++; 
	}
	}while(x!=0);
	system("cls");//清除  
	cout<<"遊戲開始，請輸入猜測的數字"<<'\n'; 
	char  s1[n],s2[n];//s1:題目s2:猜測的答案  
	//生成題目	
	srand( time(NULL) ); 
	for(i=0;i<n;i++)s1[i] =  rand()%8+49;
	for(int k=0;k<9;k++){//多了這一行會比較穩定一點  
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				//題目中的數字不可重複 
				//只會生成1-9之間的數字 
				while(i!=j && s1[i]==s1[j]){
					s1[i] =  rand()%9+49;
				}
			}		
		}
	}
	//下面兩行為檢察用 ，可輸出答案 
	for(i=0;i<n;i++)cout<<s1[i];
//	for(i=0;i<20;i++)cout<<'\n';
	while(true){//無窮迴圈，下面有終止條件 
		do{
			x=0;
			cout<<"==>";
			for(i=0;i<n;i++)cin >>s2[i];
			//檢測輸入數字是否重複 
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(i!=j && s2[i]==s2[j])x++;	
				}
			}
			if(x!=0)cout<<"請勿輸入重複的數字"<<'\n';
		}while(x!=0);
		//檢查答案是否正確並給出提示 
		a=0;
		b=0;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(s1[i]==s2[j] && i==j)a++;
				if(s1[i]==s2[j] && i!=j)b++;
				if(a==n){
					cout<<n<<"A0B"<<'\n';
					cout<<"Y O U W I N !";
					return 0;
				}
			}
		}
		cout<<a<<"A"<<b<<"B"<<'\n';
	}
} 
