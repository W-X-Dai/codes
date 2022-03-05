#include<iostream>
using namespace std;
int main(){
	int n,m,h,up;
	cin >>n>>m;
	swap(n,m);
	for(int ii=0;ii<m;ii++){
		h=1;
		up=1;
		for(int i=0;i<2*n-1;i++){
			for(int j=0;j<h;j++){
				cout<<h;
			}
			if(h>=n)up=0;
			if(up)h++;
			else h--;
			cout<<endl;
		}
		cout<<endl;
	}

}
