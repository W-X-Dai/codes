//�i�d��3-1�j�мg�@�{���A��J2����禨�Z,��X�`���M�����C
#include <iostream>
using namespace std;

int main(){
	int a,b,i,total;
	
	cout<<"�п�J�Z���`�H��"<<endl;
	cin >>total;
	int ave[total];
	i=1;
while(i<=total) {
	
	cout<<"�Ш̮y�����ǿ�J�B���Z1�B���Z2"<<endl;
	cin >>a>>b;
	cout<<"���Z1:"<<a<<endl;
	cout<<"���Z2:"<<b<<endl;
	cout<<"�`��:"<<a+b<<endl;
	cout<<"����:"<<(a+b)/2<<endl; 
	ave[i]=(a+b)/2;
	i=i+1;
}
	i=1;
	cout<<"�y��"<<" ����"<<endl;
while(i<=total){
	
		cout<<i<<"    "<<ave[i]<<endl;
		i=i+1;
		
		
		
	}
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
