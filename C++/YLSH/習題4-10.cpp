/*�i���D4-10�j�ШϥΪ̱q��L��J�褸�~�A�P�_�Ӧ~�O���O�|�~�C
�|�~�G4�����Ƭ��|�~�A�䤤100�����Ƥ��O�|�~,��400�����ƬO�|�~
*/

#include <iostream>
using namespace std;
 
int main()
{ 
	int yr;
	cin>>yr;
	if (yr%400==0)
		cout<<"�|�~";
		 
	else if(yr%4==0 && yr%100!=0)
		cout<<"�|�~";

	else 
		cout<<"���~"	;
		
		

		
		

	
	
		
    return 0;                        
}  

