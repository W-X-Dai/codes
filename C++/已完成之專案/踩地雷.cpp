//�p�C�� ��a�p
//��J�y�жi��C��
//�y�Ыe��[�W*�N��n��w�����a��
//�y�Ыe��[�W#�N���p
//�����p�@�˷|��
//�򧹩Ҧ��w�����a�����
//�����Ҧ��p�]����� 
//��l�����Ʀr�N���P�򪺮�l�����X�Ӧa�p 
//�a�ϤU�誺�Ʀr�N��ѤU�X�Ӧw�����a�� 
//�C���r��!
//�s�@:josh 
#include<bits/stdc++.h>
using namespace std;
//�غc�C���ҪO 
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
	//ijk:����j�� 
	//xy��J�y��
	//w�Ѿl��l�� 
	//w1�Ѿl�a�p��  
	char n;
	//��J*#�� 
	int arr[10][10];	//�C������(���@��O�a�p) 
	int arr2[10][10];	//�C���a��(�P�򦳴X�Ӧa�p) 
	int guess[10][10];	//�x�s�A�q�F���Ǯ�l (0�S���q 1�q�L) 
int  main(){
	w=100;
	w1=0; 
	srand(time(NULL));
	for(i=0;i<10;i++){
			//�غc�C������ 
			for(j=0;j<10;j++){
				arr[i][j]=rand()%10;//�a�p�K��(0���a�p�A��l�Ʀr�w��) 
				if(arr[i][j]==0){
					//�J��a�p�N�N���|�P����l�@�O�� 
					//�o�@�q���٦b�Q�n�p��Χ�u���{���X����  
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
				//�O�a�p�N�b�a�ϤW�е�-1
				//w���w������l�ƥءA�򪱥����N�ӧQ 
					arr2[i][j]=-1;
					w--;
					w1++;
				}
		}
//�ˬd�ΡA�i�H�ݨ�C���a�ϩM���� 
/*	
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			guess[i][j]=1;
		} 
	}
	picture(i,j,k,arr2,guess);
	cout<<guess[1][2];
*/
//�H�U�O���s�C���i�檺�{�� 
	while(true){
		system("cls");//�M���H�e���Ҧ��O�� 
		cout<<"�п�J�A�Q�򪺮y��(�p�U��)"<<'\n';
		cout<<"���k:��J*�����J�n�򪺮y��"<<'\n';
		cout<<"     ��J#�����J�Aı�o�O�a�p���y��"<<'\n';
		cout<<"     �򧹩Ҧ��w������l�άO�����Ҧ����p����ӧQ"<<'\n'; 
		picture(i,j,k,arr2,guess);
		cout<<"�ѤU"<<w<<"��w������l"<<'\n';
		cout<<"�ѤU"<<w1<<"�Ӧa�p"<<'\n';
		cin >>n>>x>>y;
		guess[x][y]=1;
		if(n=='*'){
			if(arr2[x][y]==-1){
				system("cls");
				cout<<"�п�J�A�Q�򪺮y��(�p�U��)"<<'\n';
				for(i=0;i<10;i++){
					for(j=0;j<10;j++){
						guess[i][j]=1;
					} 
				}				
				picture(i,j,k,arr2,guess);
				cout<<"�A���a�p�F"<<'\n'; 
				cout<<"YOU LOSE"<<'\n';
				system ("pause");
				return 0;
			}
			w--;
			if(w==0){
				system("cls");	
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
				system("cls");	
				for(i=0;i<10;i++){
					for(j=0;j<10;j++){
						guess[i][j]=1;
					} 
				}
				picture(i,j,k,arr2,guess);				
				cout<<"���̨S���a�p"<<'\n'; 
				cout<<"YOU LOSE"<<'\n';
				system ("pause");
				return 0;
			}
			w1--;
			if(w1==0){
				system("cls");
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
			arr2[x][y]=-2;//-2�N��Q���L���a�p 
		}
		
	
	}
return 0;
}
//���Ӯi��:�a�p����(���I�·�)
//		   �ۤv����a�Ϫ����(�]�ܳ·�)
//		   �[�J�p���t��(���²��@�I�A�i�O�@�˳·�) 
