#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int k,w,s,e;

inline int night(int b,int e){
    int cost[50]={0},cnt=0;
    cost[18]=185,cost[19]=195,cost[20]=205,cost[21]=215;
    cost[22]=225;

    for(int i=b;i<e;++i){
        cnt+=cost[i];
    }
    return cnt;
}

inline void sol(){
    int ans=0;

    if(k<=2)ans+=20;
    else{
        ans+=20,k-=2;
        ans+=k*5;
    }
    ans+=night(s,e);
    ans+=(w/2)*5;
    
    cout<<ans<<'\n';
}

int main(){
//    ios::sync_with_stdio(0),cin.tie(0);
    while(cin >>k>>w>>s>>e)sol();
}
