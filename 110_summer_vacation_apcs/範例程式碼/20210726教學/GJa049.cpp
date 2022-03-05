#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin >>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(i%3==j%3)cout<<"@";
			else cout<<"-";
		}
		cout<<endl;
	}
}

