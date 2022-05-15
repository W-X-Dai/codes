#include<bits/stdc++.h>
#define ll long long
#define MXN 100005

using namespace std;


string s1,s2;

void sol();

int main(){
	srand(time(NULL));
	
	for(int i=0;i<=5;++i){
		int x;char tmp=i+48;
		s1.clear(),s2.clear();

		s1="evilceremony_1";s1+=tmp;s1+=".in";
		s2="evilceremony_1";s2+=tmp;s2+=".out";
		
        sol();

	}
	return 0;
}


void sol(){
	int t=rand()%50000+30000;
    ofstream f(s2,ios::trunc),f1(s1,ios::trunc);
    f1 <<t<<'\n';
    
    int y,m,d;int a=0,b=0,c=0;
    for(int i=0;i<t;++i){
        y=rand()%2500-800;m=rand()%25-7;d=rand()%40-8;if(y%2==0)++y;
	    f1<<y<<" "<<m<<" "<<d<<'\n';
	//    cout<<y<<" "<<m<<" "<<d<<'\n';
	    if(y<=0 || (m<=0 || m>12) || (d<=0 || d>31)){
	        f<<"error\n",c++;
	    }else if((m==4 || m==6 || m==9 || m==11) && d==31){
	        f<<"error\n",c++;
	    }else if(m==2 && d>28+((y%4==0 && y%100!=0) || y%400==0)){
	        f<<"error\n",c++;
	    }else if((y%4==0 && y%100!=0) || y%400==0){ 
	        f<<"No\n",b++;
	    }else if(m==d || m%d==0 || (d%2==0 || d==13)){
	        f<<"No\n",b++;
	    }else f<<"Yes\n",a++;
	    
	}cout<<a<<" "<<b<<" "<<c<<" "<<a+b+c<<'\n';
}
