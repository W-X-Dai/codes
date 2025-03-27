#include<bits/stdc++.h>
#define eb emplace_back
using namespace std;

int n, m, l, q, bad[10005];
vector<int> v[10005];

void dfs(int x){
    if(v[x].empty())return;
    bad[x]=1;

    for(auto i:v[x]){
        bad[i]=1;
        dfs(i);
    }
}

int main(){
    cin >>n>>m>>l>>q;

    int a, b;
    for(int i=0;i<m;++i){
        cin >>a>>b;
        v[a].eb(b);
    }
    for(int i=0;i<l;++i){
        cin >>a;
        if(bad[a])continue;
        dfs(a);
    }

    for(int i=0;i<q;++i){
        cin >>a;
        cout<<(bad[a] ? "TUIHUOOOOOO" : "YA~~")<<'\n';
    }

}
