#include<bits/stdc++.h>
using namespace std;
string s1,s2;
long long dp[100000];
void gv(int x,int y,int n);

int main(){
	
	char tmp;
	int x,y,n;
	
	//a1=1, a2=2
	//an=x*an-1+y*an-2  , n>2
	
	
	dp[1]=1,dp[2]=2;
	for(int i=0;i<=9;++i){
		s1="p3_1";s2="p3_1";
		tmp=i+48;
		s1+=tmp,s1+=".in",s2+=tmp,s2+=".out";
		x=rand()%50+1,y=rand()%50+2;
		n=rand()%30+3;
		gv(x,y,n);
	}
	
	
} 

void gv(int x,int y,int n){
	ofstream f1(s1,ios::trunc),f2(s2,ios::trunc);
	f1<<n<<" "<<x<<" "<<y<<'\n';
	for(int i=3;i<=n;++i){
		dp[i]=x*dp[i-1]+y*dp[i-2];
		dp[i]%=1000000000;
	}
	f2<<dp[n]<<'\n';
}

