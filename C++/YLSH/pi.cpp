#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
double x,x1,y1,i,c,pi,r;

x=0;
c=0;
	
cout<<"r?"<<endl;
cin>>r;

while(x<r*2){
		
i=0;
	
	while(i<r*2){
			
		x1=(x/r)-1;
		y1=(i/r)-1;
		
		if(((x1*x1)+(y1*y1))<1)
		  c=c+1;
		  
		  i=i+1;
		}
		  x=x+1;
	}
		  
		  cout<<fixed<<setprecision(100)<<c<<endl;
		  pi=c/(r*r);
		  cout<<pi;
return 0;
			
}
