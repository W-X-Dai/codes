/*�i���D4-9�j�����魫���ơC�г]�p�@�{���A���ϥΪ̿�J�����B�魫��A�ھ�BMI�ȡA�̤U����ܬ۹諸�T���C
�������
�Тۢפp��18.5
�ӽG�F,�h�Y�I
�Тۢפ���18.5~24.9
���d
�Тۢפj��24.9
�A�ӭD�F,�ӹB��*/
#include <iostream>
using namespace std;
 
int main()
{ 
	float h,w,b;
	cin>>h>>w;
	b=w/(h*h);
	if (b>24.9)
		cout<<"�A�ӭD�F,�ӹB��";
	else if(b>=18.5 && b<=24.9)
		cout<<"���d";

	else 
		cout<<"�ӽG�F,�h�Y�I"	;
		
		
		
		
		
		

	
	
		
    return 0;                        
}  


