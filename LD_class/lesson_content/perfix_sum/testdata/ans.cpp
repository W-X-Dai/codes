#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n,m,l,r,pre[100005];

inline void ans(int num){
    cout<<num<<'\n';
    string s1="t"+to_string(num)+".in";
    string s2="t"+to_string(num)+".out";

    ifstream f1(s1);
    ofstream f2(s2,ios::trunc);

    fill(pre,pre+100005,0);

    f1 >>n>>m;
    f1 >>pre[1];
    for(int i=2;i<=n;++i){
        f1 >>pre[i];
        pre[i]+=pre[i-1];
    }

    for(int i=0;i<m;++i){
        f1 >>l>>r;
        f2<<pre[r]-pre[l-1]<<" ";
    }
    f2<<'\n';
}

int main(){
    for(int i=1;i<=5;++i)ans(i);
}