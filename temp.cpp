#include<bits/stdc++.h>
using namespace std;

const int N=5e4+5;//10^4+5=10005
int n,a[N],b[N],dif[N];

inline int calc(int a,int b){
    return a^b;
}

int main(){
//    ios::sync_with_stdio(0),cin.tie(0);
    int a,b;
    while(cin >>a>>b){
        cout<<calc(a,b)<<'\n';
    }
}
