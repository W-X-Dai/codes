#include <iostream>
using namespace std;

/*int main(){
	char t;
	t=53;
	cout<<t;
}*/
int main(){
	int text[10];
	text[11]=text[10]+1;
	int i,x,y;
	i=1;
	while(i<=10){
	cin>>text[i];
	i=i+1;
}
	i=1;
	while(i<=10){
		
		if(text[i]>text[i+1]){
			
			x=text[i];
			text[i]=text[i+1];
			text[i+1]=x;
			i=0;
		}
		
		i=i+1;
	}
	i=1;
	
	while(i<=10){
		
		cout<<i<<":"<<text[i]<<endl;
		i=i+1;
		
	}

	
    return 0;
}
