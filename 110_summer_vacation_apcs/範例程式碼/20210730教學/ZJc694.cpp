#include<bits/stdc++.h>
using namespace std;
int main(){
	int tri[3],x,a,b,c;
	for(int i=0;i<3;i++)cin >>tri[i];
	sort(tri,tri+3);
	
	a=tri[0],b=tri[1],c=tri[2];
	cout<<a<<" "<<b<<" "<<c<<'\n';
	if(a+b<c)cout<<"No\n";
	else{
		if(a*a+b*b==c*c)cout<<"Right\n";
		if(a*a+b*b<c*c)cout<<"Obtuse\n";
		if(a*a+b*b>c*c)cout<<"Acute\n";		
	}

}

