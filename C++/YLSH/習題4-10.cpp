/*【習題4-10】請使用者從鍵盤輸入西元年，判斷該年是不是閏年。
閏年：4的倍數為閏年，其中100的倍數不是閏年,但400的倍數是閏年
*/

#include <iostream>
using namespace std;
 
int main()
{ 
	int yr;
	cin>>yr;
	if (yr%400==0)
		cout<<"閏年";
		 
	else if(yr%4==0 && yr%100!=0)
		cout<<"閏年";

	else 
		cout<<"平年"	;
		
		

		
		

	
	
		
    return 0;                        
}  

