#include<bits/stdc++.h>
#define inf 0x3f3f3f3f
using namespace std;

int x,y,n,a,b,mini=inf,ansa,ansb;

inline int dis(int a,int b){
    return (x-a)*(x-a)+(y-b)*(y-b);
}

int main(){
    cin >>x>>y>>n;
    for(int i=0;i<n;++i){
        cin >>a>>b;
        if(dis(a,b)<mini){
            ansa=a,ansb=b;
            mini=dis(a,b);
        }
    }
    cout<<ansa<<" "<<ansb<<'\n';
}
