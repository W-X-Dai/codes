//【範例3-2】兩變數的值交換。例如: x=1, y=0，兩變數的值交換後，會變成x=0, y=1。
//請寫一程式,讓使用者輸入兩整數,將兩數交換後輸出。
#include <iostream>
using namespace std;
int main(){
		int x,y,z;
		cout<<"enter x"<<endl;
		cin >>x;
		cout<<"enter y"<<endl;
		cin >>y;
		z=x;
		x=y;
		y=z;
		cout<<"x="<<x<<",y="<<y;
		
		return 0;

}
