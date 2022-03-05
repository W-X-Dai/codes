#include <bits/stdc++.h>
using namespace std;
int main(){
	float v1,v2,be,th,t;
	
	cin >>v1>>v2>>th>>be;
	
	s=sqrt(v1*v1+1);
	t=sqrt(s*s+v2*v2);
	
	th*=1/tan(v1);
	be*=1/tan(v2/s); 
	
	
}
