#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n,dmx,pt,vis[100005];
vector<int> v[100005];

inline void dfs(int rt,int d){
    vis[rt]=1;
//    cout<<rt<<" "<<d<<'\n';
    if(d>dmx)pt=rt,dmx=d;
    for(int i:v[rt]){
        if(!vis[i])dfs(i,d+1);
    }
}

inline void sol(int num){
    cout<<num<<'\n';
    string s1="t"+to_string(num)+".in";
    string s2="t"+to_string(num)+".out";

    ifstream f1(s1,ios::in);
    ofstream f2(s2,ios::trunc);

    dmx=0;
    f1 >>n;
    for(int i=1;i<=100000;++i){
        int l=v[i].size();
        for(int j=0;j<l;++j)v[i].pop_back();
    }

    for(int i=0;i<n-1;++i){
        int a,b;
        f1 >>a>>b;
        v[a].eb(b);
        v[b].eb(a);
    }
    fill(vis+1,vis+1+n,0);
    dfs(1,0);dmx=0;//cout<<pt<<'\n';
    fill(vis,vis+100001,0);
    dfs(pt,0);
    f2<<dmx<<'\n';
}

int main(){
    for(int i=0;i<10;++i)sol(i+1);
}