#include <iostream>
using namespace std;

void tower(int n,char from,char to,char mid){
	if(n==1){
		cout<<from<<" -> "<<to<<'\n';
	}else{
		//move 1~n-1 to middle
		tower(n-1,from,mid,to);
		//move the last one to destination
		tower(1,from,to,mid);
		//move the middle disks to destination 
		tower(n-1,mid,to,from);
		
	}
}

int main(){
	int n;
	cin >>n;
	//move disks from A to C
	tower(n,'A','C','B');
	return 0;
}