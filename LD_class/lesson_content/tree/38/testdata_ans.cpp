#include<bits/stdc++.h>
#define eb emplace_back
#define N 100005
using namespace std;

int n,m;
int ori[N],bad[N];
vector<int> v[100005];

inline void dfs(int root){
//    cout<<root<<'\n';
    if(bad[root]==1)return;
    bad[root]=1;
    for(auto i:v[root]){
        dfs(i);
    }
}

inline void sol(int num){

    cout<<num<<'\n';
    string s1="t"+to_string(num)+".in";
    string s2="t"+to_string(num)+".out";

    ifstream f1(s1,ios::in);
    ofstream f2(s2,ios::trunc);

    f1 >>n>>m;

    fill(bad,bad+n+5,0);
    for(int i=0;i<=n;++i)v[i].clear();


    for(int i=0;i<m;++i)f1 >>ori[i];
    for(int i=0;i<n-1;++i){
        int a,b;
        f1 >>a>>b;
        v[a].eb(b);
    }
    for(int i=0;i<m;++i)dfs(ori[i]);
    for(int i=1;i<=n;++i){
        f2<<(bad[i] ^ 1)<<" ";
    }
    f2<<'\n';
}

int main(){
    for(int i=0;i<10;++i)sol(i+1);
}