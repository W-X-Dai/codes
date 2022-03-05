#include<bits/stdc++.h>
using namespace std;

bool base[3];
int o;
int run(int play){
	int sc=0;
	o=0;
	if(!play)o++;
	if(o==3)base[3]={0},o=0;
	for(int i=2;i>=0;i++){
		if(base[i]==1){
			base[i]=0;
			if(i+play>2)sc++;
			else base[i+play]++;
		}
	}
	base[play-1]=1;
	return sc;
}


int main(){
	int play[9][6];
	int i,j,n,score=0;
	char x1,x2;
	
	for(i=0;i<9;i++){
		cin >>n;
		play[i][0]=n;
		for(j=1;j<=n;j++){
			cin >>x1>>x2;
			if(x1=='1')play[i][j]=1;
			if(x1=='2')play[i][j]=2;
			if(x1=='3')play[i][j]=3;
			if(x1=='H')play[i][j]=4;
			if(x1=='F' or x1=='G' or x1=='S')
				play[i][j]=0;
		}
	}
	
	cin >>n;
	int out=0;
	for(i=1;i<=5;i++){
		for(j=0;j<9;j++){
		/*	if(!play[j][i])out++;
			score+=run(play[j][i]);
			if(out==n)break;*/
			cout<<play[j][i]<<" ";
		}
		cout<<'\n';
	//	if(out==n)break;
	}
	cout<<score<<'\n';
}

