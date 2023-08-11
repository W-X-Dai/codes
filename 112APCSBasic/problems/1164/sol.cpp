#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	int a,b;
	cin>>a>>b;
    
	if(b==0){
		cout<<"No\n";
	}else{
		if(a%b==0)cout<<"Yes\n";
		else cout<<"No\n";
	}

    return 0;
}