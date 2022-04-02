#include<bits/stdc++.h>
using namespace std;

void gv();
int pos[9][2]={{1,1},{1,0},{0,1},{1,-1},{-1,1},{-1,-1},{0,-1},{-1,0}};

int main(){
	srand(time(0));
	gv();
}

void gv(){
	ofstream f1("bomb_00.in"),f2("bomb_00.out");
	int n,m,k,t,a,b;
	int xx=500;
	
	while(xx--){
		n=rand()%100+1;
		m=rand()%100+1;
		k=rand()%n*m+1;
		t=rand()%500+500;
		f1<<n<<" "<<m<<" "<<k<<" "<<t<<'\n';
		int arr[105][105]={0};
		for(int i=0;i<k;++i){
			a=rand()%n+1,b=rand()%m+1;
			arr[a][b]=1;
			f1<<a<<" "<<b<<'\n';
		}
		
		for(int i=0;i<t;++i){
			a=rand()%n+1,b=rand()%m+1;
			f1<<a<<" "<<b<<'\n';
			int tmp=0;
			if(arr[a][b]==1)f2<<"bomb ";
			else{
				for(int j=0;j<8;++j)
					if(arr[a+pos[j][0]][b+pos[j][1]])++tmp;
				f2<<tmp<<" ";				
			}			
		}
		f2<<'\n';
	}
}
