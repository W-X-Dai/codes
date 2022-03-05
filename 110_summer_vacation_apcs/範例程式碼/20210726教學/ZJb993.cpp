#include<iostream>
using namespace std;
int main(){
	int n,x,ma;
	while(cin >>n){
		cin >>ma;
		for(int i=0;i<n-1;i++){
			cin >>x;
			if(x>ma)ma=x;
		}
		cout<<ma<<endl;
	}
}
