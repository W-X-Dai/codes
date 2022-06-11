#include<bits/stdc++.h>
#define ll long long
using namespace std;

inline void ans(int num){
    cout<<num<<'\n';
    string s1="t"+to_string(num)+".in";
    string s2="t"+to_string(num)+".out";
    ifstream f1(s1);
    ofstream f2(s2,ios::trunc);

    ll arr[100005],pre[100005];pre[0]=0;
    ll n,x;
    f1 >>n>>x;
    for(int i=1;i<=n;++i){
        f1 >>arr[i];
        pre[i]=arr[i]+pre[i-1];
    }
    for(int i=1;i<=n;++i){
        int tmp=lower_bound(pre+1+i,pre+1+n,x+pre[i-1])-pre;
        if(pre[tmp]-pre[i-1]==x){
            f2<<i<<" "<<tmp<<'\n';
            return;
        }
    
    }
}

int main(){
    for(int i=1;i<=13;++i)ans(i);
}