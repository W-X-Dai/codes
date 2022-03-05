#include<iostream>
using namespace std;
int main(){
	int n,s,tot,x;
	while(cin >>n){
		s=59*n,tot=0;
		for(int i=0;i<n;i++){
			cin >>x;
			tot+=x;
		}
	//	cout<<s<<" "<<tot<<endl;
		if(tot>s)cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
}

