#include<bits/stdc++.h>
using namespace std;


int main() {
	int n, arr[5][6];
	

	for(int i=0;i<5;++i){
		for(int j=0;j<6;++j){
			cin >>arr[i][j];
		}
	}

	for(int a=-10;a<=10;++a){
		for(int b=-10;b<=10;++b){
			for(int c=-10;c<=10;++c){
				for(int d=-10;d<=10;++d){
					for(int e=-10;e<=10;++e){
						for(int i=0;i<5;++i){
							if(a*arr[i][0]+b*arr[i][1]+c*arr[i][2]+d*arr[i][3]+e*arr[i][4]==arr[i][5]){
								cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<'\n';
								return 0;
							}
						}
					
					}
				}
			}
		}
	}

}
