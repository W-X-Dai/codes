#include<bits/stdc++.h>
#define int long long
#define N 500050

using namespace std;
signed main(){
    int t1=0,h1,m1,s1,t;
    int t2=0,h2,m2,s2;
    char op;
    
    cin >>h1>>op>>m1>>op>>s1;
    cin >>h2>>op>>m2>>op>>s2;
    
    t1+=h1*3600+m1*60+s1;
    t2+=h2*3600+m2*60+s2;
    
    t=t2-t1;
    if(t<0)t+=3600*24;
    
    if(t/3600<10)cout<<0;
    cout<<t/3600<<":";
    t/=3600;
    if(t/60<10)cout<<0;
    cout<<t/60<<":";
    t/=60;
	if(t<10)cout<<0;
    cout<<t<<'\n';
	
}
