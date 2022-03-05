/*【習題4-9】身高體重指數。請設計一程式，讓使用者輸入身高、體重後，根據BMI值，依下表顯示相對的訊息。
條件顯示
ＢＭＩ小於18.5
太瘦了,多吃點
ＢＭＩ介於18.5~24.9
健康
ＢＭＩ大於24.9
你太胖了,該運動*/
#include <iostream>
using namespace std;
 
int main()
{ 
	float h,w,b;
	cin>>h>>w;
	b=w/(h*h);
	if (b>24.9)
		cout<<"你太胖了,該運動";
	else if(b>=18.5 && b<=24.9)
		cout<<"健康";

	else 
		cout<<"太瘦了,多吃點"	;
		
		
		
		
		
		

	
	
		
    return 0;                        
}  


