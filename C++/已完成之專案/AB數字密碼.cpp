//�p�C�� AB�Ʀr�K�X(�S�W:1A2B)
//�C���W�h���A�حz�A�Ԩ�https://blog.edumeme.org/2018/07/1a2b.html  
//�@���q���Ҧ���ƺ�ӧQ  
//�i��ܦ��  
//����������ˬd�ΥN�X  
//�C���r��!
//���@�Ӻ|�}�A���ƹL�j�ɡA��X���D�حȷ|�����D
//��X���D�ط|�X�{�r�����ƪ��{�H 
//�s��:josh
#include<bits/stdc++.h>
using namespace std;
int i,j,a,b,n,x;
//i j����j��  
//a b���X����  
//n ���  
//x �P�_��J�ȬO�_�X�z  
int main(){
	do{
	x=0;
	cout<<"�п�ܦ��(1-9)"<<'\n';
	cin >>n; 
	if(n>9 || n<1){
		cout<<"�п�J���Ħ��"<<'\n';
		x++; 
	}
	}while(x!=0);
	system("cls");//�M��  
	cout<<"�C���}�l�A�п�J�q�����Ʀr"<<'\n'; 
	char  s1[n],s2[n];//s1:�D��s2:�q��������  
	//�ͦ��D��	
	srand( time(NULL) ); 
	for(i=0;i<n;i++)s1[i] =  rand()%8+49;
	for(int k=0;k<9;k++){//�h�F�o�@��|���í�w�@�I  
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				//�D�ؤ����Ʀr���i���� 
				//�u�|�ͦ�1-9�������Ʀr 
				while(i!=j && s1[i]==s1[j]){
					s1[i] =  rand()%9+49;
				}
			}		
		}
	}
	//�U����欰�˹�� �A�i��X���� 
	for(i=0;i<n;i++)cout<<s1[i];
//	for(i=0;i<20;i++)cout<<'\n';
	while(true){//�L�a�j��A�U�����פ���� 
		do{
			x=0;
			cout<<"==>";
			for(i=0;i<n;i++)cin >>s2[i];
			//�˴���J�Ʀr�O�_���� 
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(i!=j && s2[i]==s2[j])x++;	
				}
			}
			if(x!=0)cout<<"�Фſ�J���ƪ��Ʀr"<<'\n';
		}while(x!=0);
		//�ˬd���׬O�_���T�õ��X���� 
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
