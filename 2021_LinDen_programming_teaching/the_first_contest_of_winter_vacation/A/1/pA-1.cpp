#include<bits/stdc++.h>
#define ll long long
//#define f1 cin
//#define f2 cout

using namespace std;

int main(){
	string s;
//	while(cin >>s){
	//	string s1=s+".in",s2=s+".out";
	//	ifstream f1(s1);
	//	ofstream f2(s2);
		ios::sync_with_stdio(0),cin.tie(0);
		int z,k;
		while(cin >>z>>k){
			if(z<3){cout<<"err\n";continue;}
			int x,y;
			for(y=-3;y<k;y+=3){
				x=k-y;
				if(z==x*pow(3,y/3+1)){
					cout<<x<<" "<<y<<'\n';
					break;
				}
			}
			if(y>=k)cout<<"err\n";
		}		
	//	cerr<<"the end\n";
//	}

	


}

