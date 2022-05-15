#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	int t,y,m,d;
	
	cin >>t;
	while(t--){
	    cin>>y>>m>>d;
	    if(y<=0 || (m<=0 || m>12) || (d<=0 || d>31)){ 
	        cout<<"error\n";
	    }else if((m==4 || m==6 || m==9 || m==11) && d==31){
	        cout<<"error\n";
	    }else if(m==2 && d>28+((y%4==0 && y%100!=0) || y%400==0)){
	        cout<<"error\n";
	    }else if((y%4==0 && y%100!=0) || y%400==0){ 
	        cout<<"No\n";
	    }else if(m==d || m%d==0 || (d%2==0 || d==13)){
	        cout<<"No\n";
	    }else cout<<"Yes\n";		
		
	}
	

    return 0;
}
