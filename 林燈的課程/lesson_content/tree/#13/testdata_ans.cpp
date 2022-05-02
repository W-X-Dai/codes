#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

vector<int> v[200005];
int n,a,b,arr[200005];

inline void dfs(int root){
//    if(v[root].empty())return;
    for(int i:v[root]){
        dfs(i);
        arr[root]+=arr[i]+1;
    }
}

inline void sol(int num){
    cout<<num<<'\n';
    string s1="t"+to_string(num)+".in";
    string s2="t"+to_string(num)+".out";

    ifstream f1(s1,ios::in);
    ofstream f2(s2,ios::trunc);

    for(int i=1;i<=200001;++i)v[i].clear();
    for(int i=1;i<=200001;++i)arr[i]=0;

    f1 >>n;
    for(int i=2;i<=n;++i){
        f1 >>a;
        v[a].eb(i);
    }
    dfs(1);
    for(int i=1;i<=n;++i)f2<<arr[i]<<" ";
    f2<<'\n';
}

int main(){
    for(int i=1;i<=10;++i)sol(i);
}