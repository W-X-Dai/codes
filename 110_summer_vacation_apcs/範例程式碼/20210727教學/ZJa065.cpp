#include<iostream>
#include<cmath>
using namespace std;
int main(){
	char a,b;
	int ans=0;
	
	while(cin >>a){
		ans=0;
		for(int i=0;i<6;i++){
			cin >>b;
			ans+=abs(a-b)*pow(10,5-i);
			swap(a,b);
		}
		for(int i=0;i<5;i++){
			if(ans<pow(10,5-i))cout<<0;
		}
		cout<<ans<<endl;
	}


}
