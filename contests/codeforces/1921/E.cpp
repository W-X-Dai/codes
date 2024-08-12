#include <bits/stdc++.h>
#define int long long
#define eb emplace_back
#define pii pair<int,int>
#define ff first
#define ss second
#define m_p make_pair

using namespace std;

const int N=2e5+5;

int h,w,xa,xb,ya,yb;

inline void init(){
	cin >>h>>w>>xa>>ya>>xb>>yb;
}

inline void sol(){
	if((xa-xb)%2==0){
		if(yb==ya){
			cout<<"BOB\n";
			return;
		}
		int x=xb-xa;
		if(ya>yb){
			if(yb+x/2>=min(w,ya+x/2)){
				cout<<"BOB\n";
				return;
			}else{
				cout<<"DRAW\n";
				return;
			}
		}else{
			if(yb-x/2<=max((long long)0,ya-x/2)){
				cout<<"BOB\n";
				return;
			}else{
				cout<<"DRAW\n";
				return;
			}			
		}
	}else{
		if(yb==ya){
			cout<<"ALICE\n";
			return;
		}
		int x=xb-xa;
		if(ya<yb){
			if(ya+x/2+1>=min(w,yb+x/2)){
				cout<<"ALICE\n";
				return;
			}else{
				cout<<"DRAW\n";
				return;
			}
		}else{
			if(ya-x/2-1<=max((long long)0,yb-x/2)){
				cout<<"ALICE\n";
				return;
			}else{
				cout<<"DRAW\n";
				return;
			}			
		}
	}
}

int32_t main() {
    ios::sync_with_stdio(0),cin.tie(0);
    int t;cin >>t;
    while(t--)init(),sol();
    return 0;
}
